#include <iostream>
using namespace std;

int main()
{
    float firstNumber;
    float secondNumber;
    float temp;

    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;

    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;
 
    cout << endl<< "You input the numbers as " << firstNumber << " and " << secondNumber << endl;

    temp= firstNumber;
    firstNumber = secondNumber;
    secondNumber= temp;

    cout << "After swapping, the values of the two numbers are " 
    << firstNumber << " and " << secondNumber << endl;
    return 0;
}


