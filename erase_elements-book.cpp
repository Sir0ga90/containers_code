#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "erase_elements.h"

//=================================================

void eraseMapElems(MMap& _ersMap){
    size_t randNum = getRandNum();
    mmiter mIterBgn = _ersMap.begin();

    clog << "Random number of erase elements for map is ->" << randNum << endl;

    for(size_t i = 0; i < randNum; i++){
        mIterBgn->second--;       
        testToZero(_ersMap, mIterBgn);
    }
}

//=================================================
void testToZero(MMap& _m, mmiter& _mit){
    if(_mit->second == 0)
        _m.erase(_mit++);
}

//=================================================
void eraseVecElems(MVec & _ersVec){
    size_t randNum = getRandNum();
    mviter mIterBgn = _ersVec.begin();
    mviter mIterEnd = _ersVec.begin() + randNum;

    clog << "Random number of erase elements for vector is ->" << randNum << endl;

    _ersVec.erase(mIterBgn, mIterEnd);
}

//=================================================
size_t getRandNum(void){
    srand(time(0));
    return rand() % MAX_ERS_NUM + 1;
}

//=================================================