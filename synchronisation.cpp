/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "synchronisation.h"

//=============================================
/*
  Common func for synchronisation of containers

    in: _map - main map
    in: _vec - main vector
*/
void sync(MMap& _map, MVec& _vec){
  printSepLine();

  cout << "___Here is synchronised containers___\n\n";
  syncMapVec(_map, _vec);
  printMapAndVec(_map, _vec);

  printSepLine();
}

//=============================================
/*
  Func for synchronisation of containers

    in: _map - main map
    in: _vec - main vector
*/
void syncMapVec(MMap& _map, MVec& _vec){
    sort(_vec.begin(), _vec.end());    // sort for better viewing of vector

    filterMap(_map, _vec);
    filterVec(_map, _vec);
}                                              

//=============================================
/*
  Func for filtering map elements:
  if in vector no elements same as
  element.first - erase this element from map 

    in: _map - main map
    in: _vec - main vector
*/
void filterMap(MMap& _map, MVec& _vec){

  if ( checkEmptyMap(_map) )
    return;

  mMIter mIt = --_map.end();            //"--"  - because end() is one beyond
  mMIter mItE = _map.begin();

  for(; mIt != mItE; mIt--){
    compareMapToVec(mIt, _map, _vec);
  }
  compareMapToVec(mIt, _map, _vec);          // again for begin() element
}

//=============================================
/*
  Check if main map is empty: in that case
  further functions are not necessary

    in: _map - main map
*/
inline bool checkEmptyMap(MMap& _map){

  if(_map.empty()){
    cout << "MAP is empty" << endl;
    return true;
  }

}

//=============================================
/*
  Compare each element of map with all elements of 
  vector
    in: _mIter - current map iterator
    in: _map - main map
    in: _vec - main vector
*/
void compareMapToVec(mMIter& _mIter,
                     MMap& _map,
                     MVec& _vec)
{
    mVIter vIt = _vec.begin();
    mVIter vItEnd = _vec.end();

    for(; vIt != vItEnd; vIt++){

        if(_mIter->first == *vIt){      // if equivalent element is in vector
            return;
        }

    }//for(; vIt != vItEnd; vIt++)

    _mIter = _map.erase(_mIter);          // erase element if no equivalent element
}

//=============================================
/*
  Func for filtering vector elements:
  if in vector no elements same as
  element.first - erase this element from vector

    in: _map - main map
    in: _vec - main vector
*/
void filterVec(MMap& _map, MVec& _vec){
  mVIter vIt = --_vec.end();           //"--"  - because end() is one beyond
  mVIter vItEnd = _vec.begin();

  for(; vIt != vItEnd; vIt--){
    compareVecToMap(vIt, _vec, _map);
  }
  compareVecToMap(vIt, _vec, _map);   //again for begin() element

}

//=============================================
/*
  Compare each element of map with all elements of
  vector
    in: _vIter - current vector iterator
    in: _map - main map
    in: _vec - main vector
*/
void compareVecToMap(mVIter& _vIter,
                     MVec& _vec,
                     MMap& _map)
{
  mMIter mIt = _map.begin();
  mMIter mItEnd = _map.end();

  for(; mIt != mItEnd; mIt++){

    if(*_vIter == mIt->first){        // if equivalent element is in map
      return;
    }

  }//for(; mIt != mItEnd; mIt++)

  _vIter = _vec.erase(_vIter);        // erase element if no equivalent element
}

