// ParkingGarage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CFloor.h"
#include "CRow.h"
#include "CSpace.h"
#include "CParkingGarage.h"
#include "Globals.h"
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //base parking garage
    CParkingGarage garage;

    //Prompt for number of floors in the garage
    int number_of_floors = 0;
    printf("Enter Number Of Floors: ");
    scanf_s( "%d", &number_of_floors);
    if (MAX_FLOORS < number_of_floors)
    {
        printf("You have exceeded the maxium number of floors.\n");
        printf("The maxium number of floors is:%d\n", MAX_FLOORS);
        exit(FAILURE);
    }

    //prompt for and read in the number of rows of spaces which will be on each floor of the garage
    int number_of_rows = 0;
    printf("Enter number of rows of cars for each floor: ");
    scanf_s("%d", &number_of_rows);
    if (MAX_ROWS < number_of_rows)
    {
        printf("You have exceeded the maxium number of rows.\n");
        printf("The maxium number of rows is:%d\n", MAX_ROWS );
        exit(FAILURE);
    }

    //prompt for and read in the number of spaces in each row of parking spaces in the garage
    //  NOTE: each row is a single row of spaces.  Not a double row of cars parked nose to nose
    int number_of_spaces = 0;
    printf("Enter number of parking spaces in each row: ");
    scanf_s("%d", &number_of_spaces);
    if (MAX_SPACES < number_of_spaces)
    {
        printf("You have exceeded the maxium number of parking spaces per row.\n");
        printf("The maxium number of rows is:%d\n", MAX_SPACES);
        exit(FAILURE);
    }

    //Create and add the floors to the garage
    for (int i = 0; i < number_of_floors; i++)
    {
        try
        {
            CFloor* floor = new CFloor();
            floor->SetFloorNumber( i + 1 );
            garage.AddFloor(floor);
            printf("added floor number %d\n", floor->GetFloorNumber());

            for (int j = 0; j < number_of_rows; j++)
            {
                CRow* row = new CRow();
                floor->AddRow(row);
                row->SetRowNumber(j + 1);
                printf("added row number %d\n", row->GetRowNumber());

                for (int k = 0; k < number_of_spaces; k++)
                {
                    //NOTE: creating a space also generates and sets its size randomly
                    CSpace* space = new CSpace();
                    row->AddSpace(space);
                    space->SetSpaceNumber( k + 1 );
                    printf("added space number %d with size = %s \n",
                        space->GetSpaceNumber(),
                        space->GetSpaceSize() == LARGE_SIZE ? "LARGE" :
                        space->GetSpaceSize() == COMPACT_SIZE ? "COMPACT" :
                        space->GetSpaceSize() == MOTORCYCLE_SIZE ? "MOTORCYCLE" : "!BAD!");
                }
            }
        }
        catch (...)
        {
            printf("INTERNAL ERROR: Failure while allocating memory for garage in %s\n", __FUNCDNAME__);
        }
    }

    printf("Number of Floors has been set to: %d\n",garage.GetNumberOfFloors());
}
