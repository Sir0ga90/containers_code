/*
@author: Sir0ga90
@version: 0.1
@date: 04.10.2016
*/

//=============================================
#include <random>
#include <ctime>
#include <iomanip>

#include "ñontainer.h"

//=============================================
/*
  Common fill of main containers

  in: _map - main map
  in: _vec - main vector
*/
void fill(MMap& _map, MVec& _vec){
  printSepLine();

  cout << "___Here is init containers___\n\n";
  fillContainers(_map, _vec);
  printMapAndVec(_map, _vec);
  
  printSepLine();
}

//=============================================
/*
  in: _map - main map
  in: _vec - main vector 
*/
void fillContainers(MMap& _map, MVec& _vec){
  fillRandMap(_map);
  fillRandVec(_vec);
}

//=============================================
/*
  Fill main map with random numbers from 1 to 9.

    in: _map - main map
*/
void fillRandMap(MMap& _map){
	srand( (unsigned)time(0) );

	for (int i = 0; i < MAX_SZ; i++){
		++_map[rand() % 10];
	}
}

//=============================================
/*
  Fill main vector with random numbers from 1 to 9.

    in: _vec - main vector
*/

void fillRandVec(MVec& _vec){
  for(int i = 0; i < MAX_SZ; i++){
    _vec.push_back( rand() % 10 );
  }
}

//=============================================
/*
  Print main map & it's size

    in: _mM - main map
*/

void printMap(const MMap& _mM){
    for(const auto& elem : _mM){
        cout << " [" << elem.first << ", " << elem.second << "]";
    }
    cout << endl << " size() == " << _mM.size()
      << endl << endl;
}

//=============================================
/*
  Print main vector & it's size

    in: _mV - main vector
*/
void printVec(MVec& _mV){
  for(auto x : _mV){
    cout << " [" << x << "]";
  }
  cout << endl << " size() == " << _mV.size() << endl;
}

//=============================================
/*
  Common print of containers

    in: _map - main map
    in: _vec - main vector
*/
void printMapAndVec(MMap& _myM,
                    MVec& _myV){
	printMap(_myM);
	printVec(_myV);
}

//=============================================
/*
  Print separator line in view of "------------"
*/
void printSepLine(void){
  cout << setfill('-') << setw(80) << "-";
}

//=============================================
