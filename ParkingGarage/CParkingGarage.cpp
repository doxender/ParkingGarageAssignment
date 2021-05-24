#include "Globals.h"
#include "CParkingGarage.h"
#include "CFloor.h"

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

// Park
//  inputs: a Vehicle to be parked
//  return: success/failure if the vehicle could be parked or not
int CParkingGarage::Park(CVehicle* Vehicle)
{
    if (NULL == Vehicle)
    {
        return(FAILURE);
    }

    for(auto & floor : mFloors )
    {
        if (floor->Park(Vehicle))
        {
            break; //if we are successful parking the vehicle, we don't need to go any further
        }
    }

    return(SUCCESS);
}

