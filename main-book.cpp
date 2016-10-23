#include "Container.h"
#include "erase_elements.h"

//=================================================
using namespace std;


//=================================================
int main()
try{
    MMap mp;
    MVec mv;

    fillRandMap(mp);
    printMap(mp);
    eraseMapElems(mp);
    printMap(mp);

    fillRandVec(mv);
    printVec(mv);
    eraseVecElems(mv);
    printVec(mv);
}
catch(exception& e){
    cerr << "ERROR: " << e.what() << endl;
}