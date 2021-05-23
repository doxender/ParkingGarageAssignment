#pragma once
#include "CParkingGarage.h"

class CRow;  //forward defination

class CFloor : public CParkingGarage
{
public:
    //constructor
    CFloor();

    //destructor
    //Frees "row" memory
    ~CFloor();

    //SetFloorNumber
    // inputs: a row number
    // returns: success/failure
    //Provides a floor number for this floor
    int SetFloorNumber(int floor_number);

    //GetFloorNumber
    // inputs: none
    // returns: the number of this floor
    int GetFloorNumber();

    //Add Row
    // inputs: a row object
    // returns: success/failure
    int AddRow(CRow* Row);

private:
    int mFloorNumber;
    vector<CRow*> rows;
};

