/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/

//=============================================
/*
  - This header contain functions for erasing 
    random number of elements from main containers;
*/
//=============================================
#pragma once

//=============================================
#include "ñontainer.h"

//=============================================
using namespace std;

//=============================================
const size_t MAX_ERS_NUM = 15;         //max number of erased elements

//=============================================
void erase(MMap& _map, MVec& _vec);
void eraseRandContainerElems(MMap& _map, MVec& _vec);
void eraseMapElems(MMap& _ersMap);
void testToZero(MMap& _m, mMIter& _mit);
void eraseVecElems(MVec& _ersVec);
size_t getRandNum(void);

