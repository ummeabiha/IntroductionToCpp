//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS= 123;

int main()
{
    float batAvg;
    batAvg= static_cast <float> (HITS/AT_BAT);
    cout<<"The batting average is "<< batAvg <<endl;
    return 0;
}



