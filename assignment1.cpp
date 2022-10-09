// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float firstGrade, secondGrade, thirdGrade,average;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Please input the first grade \n";
    cin >> firstGrade;
    cout << "Please input the second grade \n";
    cin >> secondGrade;
    cout << "Please input the third grade \n";
    cin >> thirdGrade;

    average = (firstGrade + secondGrade + thirdGrade) / 3;
    cout << "The average of the three grades is " << average;
    return 0;
}

