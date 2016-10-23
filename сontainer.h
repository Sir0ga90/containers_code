/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/
//=============================================
/*
  - This header contain functions for random
  creating, filling & printing main 2 containers;

  - Description of functions is in .cpp file;
  
  - Also, all type-aliases here;
*/
//=============================================
#pragma once

//=============================================
#include <iostream>
#include <vector>
#include <map>

//=============================================
using namespace std;

//=============================================
using  MMap = map<int, int>;
using mMIter = MMap::iterator;

using MVec = vector<int>;
using mVIter = MVec::iterator;
//=============================================
const unsigned int MAX_SZ = 40;          // number of elements in containers

//=============================================
void fill(MMap& _map, MVec& _vec);
void fillContainers(MMap& _map, MVec& _vec);
void fillRandMap(MMap& my_m);
void fillRandVec(MVec& my_v);

void printMap(const MMap& my_m);
void printVec(MVec& my_v);
void printMapAndVec(MMap& my_m, 
                    MVec& my_v);

void printSepLine(void);