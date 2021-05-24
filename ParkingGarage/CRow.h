#pragma once
#include "CFloor.h"

class CSpace;

class CRow : 
    public CFloor
{
public:
    //constructor
    CRow();

    //destructor
    ~CRow();

    //SetRowNumber
    // inputs: the row number
    // returns: success or failure
    int SetRowNumber(int RowNumber);

    //GetRowNumber
    // inputs: none
    // returns: the row number
    int GetRowNumber();

    //AddSpace
    // inputs: a space object
    // returns: success/failure
    int AddSpace(CSpace* Space);

    // Park
    //  inputs: a Vehicle to be parked
    //  return: success/failure if the vehicle could be parked or not
    int virtual Park(CVehicle* Vehicle);

private:

    int mRowNumber;
    vector<CSpace*> spaces;

};

