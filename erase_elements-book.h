#pragma once

//=============================================
#include "Container.h"

//=============================================
using namespace std;

//=============================================
const size_t MAX_ERS_NUM = 15;         //max number of erased elements

//=============================================
void eraseMapElems(MMap& _ersMap);
void testToZero(MMap& _m, mmiter& _mit);
void eraseVecElems(MVec& _ersVec);
size_t getRandNum(void);

