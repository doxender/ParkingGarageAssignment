#pragma once
#include <vector>

class CVehicle; //forward defination
class CFloor;    //forward defination

using namespace std;

class CParkingGarage
{
 
public:
    //Constructor
    CParkingGarage();

    //Destructor
    //
    // empties the mFloors vector and deletes all floor memory
    //
    ~CParkingGarage();

    // AddFloor
    // inputs: a CFloor Object
    // return: success/failure
    //
    //Called to add a floor to the parking garage
    //
    int AddFloor(CFloor* floor);

    // GetNumberOfFloors
    // inputs: none
    // return: the number of floors in the parking garage
    //
    // Called to return the number of floors in the parking garage
    //   
    int GetNumberOfFloors();

    // Park
    //  inputs: a Vehicle to be parked
    //  return: success/failure if the vehicle could be parked or not
    int virtual Park(CVehicle* Vehicle);

private:

    vector<CFloor*> mFloors;
    
};

