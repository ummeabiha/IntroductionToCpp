// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
using namespace std;

int main()
{

    float average; // holds the grade average
    cout << "Input your average:" << endl;
    cin >> average;
    if (average >= 90 && average <= 100)
        cout << "Grade: A" << endl;
    else if (average >= 80 && average <= 89)
        cout << "Grade: B" << endl;
    else if (average >= 60 && average <= 79) 
        cout << "You Pass" << endl; 
    else if (average >= 0 && average <= 59)
        cout << "You Fail" << endl; 
    else if (average>100)
        cout << "Invalid Input" << endl;    


    return 0;
}




