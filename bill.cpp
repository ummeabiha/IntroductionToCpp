#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity;
    float itemPrice;
    float totalBill;

    cout << setprecision (4) << fixed << showpoint;
    
    cout << "Enter the amount of items bought:" <<endl;
    cin >> quantity;

    cout << "Enter the price of each item:" <<endl;
    cin >> itemPrice;

    totalBill = quantity * itemPrice;
    cout << "The total bill is: $" << totalBill;

    return 0;
}



