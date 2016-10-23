/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/
//=============================================
/*
  - This header contain functions for synchronisation
  2 main containers;
  - synchronisation -> containers have same elements
    (for map element, in this case is key of it element)
*/

//=============================================
#pragma once

//=============================================
#include "ñontainer.h"

//=============================================
using namespace std;

//=============================================
void sync(MMap& _map, MVec& _vec);
void syncMapVec(MMap& _mMap, MVec& _mVec);
void filterMap(MMap& _map, MVec& _vec);
inline bool checkEmptyMap(MMap& _map);
void filterVec(MMap& _map, MVec& _vec);
void compareMapToVec(mMIter& _mIt,
                     MMap& _map,
                     MVec& _vec);

void compareVecToMap(mVIter& _vIt,
                     MVec& _vec,
                     MMap& _map);

