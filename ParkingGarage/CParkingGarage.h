#pragma once
#include <vector>

using namespace std;
class CFloor;    //forward defination

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

private:

    vector<CFloor*> mFloors;
    
};

