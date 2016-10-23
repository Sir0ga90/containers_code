/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/

//=============================================
#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "erase_elements.h"

//=================================================
/*
  Common func for erase of elements of containers

    in: _map - main map
    in: _vec - main vector
*/
void erase(MMap& _map, MVec& _vec){
  printSepLine();

  cout << "___Here is containers with some erased elements___\n\n";
  eraseRandContainerElems(_map, _vec);
  printMapAndVec(_map, _vec);

  printSepLine();
}

//=================================================
/*
  in: _map - main map
  in: _vec - main vector
*/
void eraseRandContainerElems(MMap& _map, MVec& _vec){
  eraseMapElems(_map);
  eraseVecElems(_vec);
}

//=================================================
/*
  Erase elements from main map, from first
  element to first + random number of elements;

  Erase each elemet, not only by key type;

    in: _ersMap - main map 
*/
void eraseMapElems(MMap& _ersMap){
    size_t randNum = getRandNum();
    mMIter mIterBgn = _ersMap.begin();

    clog << "Random number of erase elements for map is ->" << randNum << endl;

    for(size_t i = 0; i < randNum; i++){
        mIterBgn->second--;       
        testToZero(_ersMap, mIterBgn);
    }
}

//=================================================
/*
  Test if this key type is empty;

  If yes - erase it;

    in: _m - main map
    in: _mit - main map iterator
*/
void testToZero(MMap& _m, mMIter& _mit){
    if(_mit->second == 0)
        _m.erase(_mit++);
}

//=================================================
/*
  Erase elements from main vector, from first
  element to first + random number of elements;

  in: _ersVec - main vector
*/
void eraseVecElems(MVec & _ersVec){
    size_t randNum = getRandNum();
    mVIter mIterBgn = _ersVec.begin();
    mVIter mIterEnd = _ersVec.begin() + randNum;

    clog << "Random number of erase elements for vector is ->" << randNum << endl;

    _ersVec.erase(mIterBgn, mIterEnd);
}

//=================================================
size_t getRandNum(void){
    srand( time(0) );
    return rand() % MAX_ERS_NUM + 1;
}

//=================================================
