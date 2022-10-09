// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream dataIn;
    ofstream dataOut;
    int quantity;
    float itemPrice;
    float totalBill;
    dataIn.open("transaction.dat");
    dataOut.open("bill.out");

    dataOut << setprecision(2) << fixed << showpoint;
    dataIn >> quantity >> itemPrice;
    totalBill = quantity * itemPrice;
    dataOut << "Total Bill is $" << totalBill;

    return 0;
}

