#pragma once
#include "CParkingGarage.h"
/*
 * CVehicle
 * Class to hold a Vehicle to be parked
 * Construction may be completed wither with a parking lot pointer
 *     or without.  If without, SetParkingGarage will need to be used
 *     to set the parking garage to be used.
 * Construction also randomly determins which vehicle will be contained
 *     by this object.  If greater control over vehicle type is required
 *     it would be accomplished by subclassing this object with CMotorcycle,
 *     CCompact, or CBus.  Or, simply by creating a SetVehicleType method.
 */
class CVehicle
{
public:
    //default constructor
    CVehicle();
    //constructor with ParkingGarage pointer overload
    CVehicle(CParkingGarage* ParkingGarage);
    //default destructor
    ~CVehicle();

    //Alows for explicitly setting the parking garage if the overload constructor
    //    is not used
    int SetParkingGarage(CParkingGarage* ParkingGarage);

    //Sets mVehicleType to a random value, Motorcycle, Compact or Bus
    int SetRandomVehicleType();

    //Parks the vehicle in the parking garage
    int Park();

    //sets floor parked at
    int SetFloor(int Floor);

    //returns the Floor parked at
    int GetFloor(int Floor);
 
    //sets row parked at
    int SetRow(int Row);

    //returns the row parked at
    int GetRow();

    //sets space parked at
    int SetSpace(int Space);

    //Set Parked Status
    int SetParked(bool Parked);


private:

    //ParkingGarage memory is released in calling program
    CParkingGarage* mParkingGarage;
    int mVehicleType;
    int mFloor;
    int mRow;
    int mSpace;
    bool mParked;
};

