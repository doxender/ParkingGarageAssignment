#include "CVehicle.h"
#include "Globals.h"

//default constructor
CVehicle::CVehicle()
{
    SetRandomVehicleType();
    mParkingGarage = NULL;
}

//constructor with ParkingGarage pointer overload
CVehicle::CVehicle(CParkingGarage* ParkingGarage)
{
    SetParkingGarage(ParkingGarage);
    SetRandomVehicleType();
}

//default destructor
CVehicle::~CVehicle()
{

}

//Alows for explicitly setting the parking garage if the overload constructor
//    is not used
int CVehicle::SetParkingGarage(CParkingGarage* ParkingGarage)
{
    mParkingGarage = ParkingGarage;
    return(SUCCESS);
}

//Sets mVehicleType to a random value, Motorcycle, Compact or Bus
int CVehicle::SetRandomVehicleType()
{
    int random_space_size = rand() % 3 + 1;  //generates a random number 1,2,3

//switch statement ensures we have a correct assignment
//    although, in theory, we could simply assign random_space_size to the
//    space size member variable, this statement ensures that the variable
//    value is constrained to one of four values
    switch (random_space_size)
    {
    case MOTORCYCLE:
        mVehicleType = MOTORCYCLE_SIZE;
        break;

    case COMPACT:
        mVehicleType = COMPACT_SIZE;
        break;

    case LARGE:
        mVehicleType = LARGE_SIZE;
        break;

    default:
        mVehicleType = UNDEFINED_VEHICLE;
        break;
    }
    return(SUCCESS);
}

//Parks the vehicle in the parking garage
int CVehicle::Park()
{
    if (NULL == mParkingGarage)
    {
        return(FAILURE);
    }

    return(mParkingGarage->Park(this));
}

//sets floor parked at
int CVehicle::SetFloor(int Floor)
{
    mFloor = Floor;
    return(SUCCESS);
}

//sets row parked at
int CVehicle::SetRow(int Row)
{
    mRow = Row;
    return(SUCCESS);
}

//returns the row parked at
int CVehicle::GetRow()
{
    return(mRow);
}

//sets space parked at
int CVehicle::SetSpace(int Space)
{
    mSpace = Space;
    return(SUCCESS);
}

//Set Parked Status
int CVehicle::SetParked(bool Parked)
{
    mParked = Parked;
    return(SUCCESS);
}


