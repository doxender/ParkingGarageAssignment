#include "Globals.h"
#include "CFloor.h"

//constructor
CFloor::CFloor()
{
    mFloorNumber = 0;
};

//destructor
//Frees "row" memory
CFloor::~CFloor()
{
    rows.clear();
}


//SetFloorNumber
// inputs: a row number
// returns: success/failure
//Provides a floor number for this floor
int CFloor::SetFloorNumber(int floor_number)
{
    mFloorNumber = floor_number;
    return(SUCCESS);

};

//GetFloorNumber
// inputs: none
// returns: the number of this floor
int CFloor::GetFloorNumber()
{
    return(mFloorNumber);
};

//Add Row
// inputs: a row object
// returns: success/failure
int CFloor::AddRow(CRow* Row)
{
    rows.push_back(Row);
    return(SUCCESS);
}
