#pragma once
#include "CRow.h"

class CSpace :
    public CRow
{
public:
    //constructor
    CSpace();

    //destructor;
    ~CSpace();

    //SetSpaceNumber
    // inputs: an integer giving the space number
    // outputs: success/failure
    int SetSpaceNumber(int SpaceNumber );

    //GetSpaceNumber
    // inputs: none
    // outputs: the space number
    int GetSpaceNumber();

    //GetSpaceSize
    // inputs: none
    // outputs: the space number
    int GetSpaceSize();

    // Park
    //  inputs: a Vehicle to be parked
    //  return: success/failure if the vehicle could be parked or not
    int Park(CVehicle* Vehicle);

private:

    int mSpaceNumber;
    int mSpaceSize;

};

