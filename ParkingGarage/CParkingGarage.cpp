#include "Globals.h"
#include "CParkingGarage.h"

//Constructor
CParkingGarage::CParkingGarage()
{

};

/*Destructor
 *
 * empties the mFloors vector and deletes all floor memory
 */
CParkingGarage::~CParkingGarage()
{
    mFloors.clear();
};

/* AddFloor
 * inputs: a CFloor Object
 * return: success/failure
 * 
 * Called to add a floor to the parking garage
 */
int CParkingGarage::AddFloor(CFloor* floor)
{
    mFloors.push_back(floor);
    return(SUCCESS);
};

/* GetNumberOfFloors
 * inputs: none
 * return: the number of floors in the parking garage
 * 
 * Called to return the number of floors in the parking garage
 */
int CParkingGarage::GetNumberOfFloors()
{
    return(mFloors.size());
};

