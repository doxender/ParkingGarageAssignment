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

private:

    int mRowNumber;
    vector<CSpace*> spaces;

};

