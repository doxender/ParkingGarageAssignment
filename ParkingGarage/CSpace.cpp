#include "CSpace.h"
#include "Globals.h"

//constructor
CSpace::CSpace()
{
    mSpaceNumber = 0;

    int random_space_size = rand() % 3 + 1;  //generates a random number 1,2,3
 
    switch (random_space_size)
    {
    case MOTORCYCLE_SIZE:
        mSpaceSize = MOTORCYCLE_SIZE;
        break;

    case COMPACT_SIZE:
        mSpaceSize = COMPACT_SIZE;
        break;

    case LARGE_SIZE:
        mSpaceSize = LARGE_SIZE;
        break;

    default:
        mSpaceSize = UNDEFINED;
        break;
    }

}

//destructor;
CSpace::~CSpace()
{
    //doesn't do anything right now, simply allows the memory for the CSpace object to be freed
}

//SetSpaceNumber
// inputs: an integer giving the space number
// outputs: success/failure
int CSpace::SetSpaceNumber(int SpaceNumber)
{
    mSpaceNumber = SpaceNumber;
    return(SUCCESS);
}

//GetSpaceNumber
// inputs: none
// outputs: the space number
int CSpace::GetSpaceNumber()
{
    return(mSpaceNumber);
}

//GetSpaceSize
// inputs: none
// outputs: the space number
int CSpace::GetSpaceSize()
{
    return(mSpaceSize);
}
