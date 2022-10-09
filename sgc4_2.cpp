#include <iostream>
using namespace std;

int main()
{
    int shirts;
    float total;

    cout << "How many shirts would you buy ?" << endl;
    cin >> shirts;

    if (shirts>=5 && shirts<=10)
    {
        total = shirts * 10.80;
        cout << "The cost per shirt is $10.80 and the total cost is $ "<< total << endl;
    }
    else if (shirts>=11 && shirts<=20)
    {
        total = shirts * 10.20;
        cout << "The cost per shirt is $10.20 and the total cost is $ "<< total << endl;
    }
    else if (shirts>=21 && shirts<=30)
    {
        total = shirts * 9.6;
        cout << "The cost per shirt is $9.6 and the total cost is $ "<< total << endl;
    }
    else if (shirts>=31)
    {
        total = shirts * 9.0;
        cout << "The cost per shirt is $9.0 and the total cost is $ "<< total << endl;
    }
    else if (shirts>=0 && shirts<=4)
    {
        total = shirts * 12;
        cout << "The cost per shirt is $12 and the total cost is $ "<< total << endl;
    }
    else
    {
        cout << "Invalid Input: Please enter a nonnegative integer" << endl;
    }

    return 0;
}