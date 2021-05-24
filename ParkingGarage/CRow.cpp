#include "CRow.h"
#include "Globals.h"

//constructor
CRow::CRow()
{
    mRowNumber = 0;
}

//destructor
CRow::~CRow()
{
    spaces.clear();
}

//SetRowNumber
// inputs: the row number
// returns: success or failure
int CRow::SetRowNumber(int RowNumber)
{
    mRowNumber = RowNumber;
    return(SUCCESS);
}

//GetRowNumber
// inputs: none
// returns: the row number
int CRow::GetRowNumber()
{
    return(mRowNumber);
}

//AddSpace
// inputs: a space object
// returns: success/failure
int CRow::AddSpace(CSpace* Space)
{
    spaces.push_back(Space);
    return(SUCCESS);
}


// Park
//  inputs: a Vehicle to be parked
//  return: success/failure if the vehicle could be parked or not
int CRow::Park(CVehicle* Vehicle)
{
    if (NULL == Vehicle)
    {
        return(FAILURE);
    }

    return(SUCCESS);
}