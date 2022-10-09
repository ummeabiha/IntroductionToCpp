//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

float speed_of_car(float miles , float hours);

int main()
{
    cout<< setprecision(2) << fixed;
    float miles, hours;
    float speed;

    cout<< "Please input the miles traveled \n";
    cin>> miles;
    cout<< "Please input the hours traveled \n";
    cin>> hours;

    cout<< "Your speed is "<< speed_of_car(miles,hours) << " miles per hour";
    return 0;
}

float speed_of_car(float distance, float time)
{
    float speed= (distance/time);
    return speed;
}

