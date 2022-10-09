// Syeda Umm E Abiha Rizvi
//  SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void printDescription();
void computePaycheck(float, int, float , float );

int main()
{
    float payRate, grossPay, netPay;
    int hours;
    cout << setprecision(0) << fixed;
    cout << "Welcome to the Pay Roll Program" << endl;
    printDescription(); 
    cout << "Please input the pay per hour" << endl;
    cin >> payRate;
    cout << endl << "Please input the number of hours worked" << endl;
    cin >> hours;
    cout << endl << endl;
    computePaycheck(payRate, hours, grossPay, netPay);
    cout << "The gross pay is $" << grossPay << endl;
    cout << "The net pay is $" << netPay << endl;
    cout<< "We hoped you enjoyed this program";
    return 0;
}

void printDescription() 
{
    cout << "************************************************" << endl << endl;
    cout << "This program takes two numbers (payRate & hours)" << endl;
    cout << "and multiplies them to get gross pay " << endl;
    cout << "it then calculates net pay by subtracting 15%" << endl;
    cout << "************************************************" << endl
         << endl;
}

void computePaycheck(float rate, int time, float gross, float net)
{
    gross= rate*time;
    net= (gross)-(gross*0.15);

}

