//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int totalSales;
    float stateTax, localTax;
    float stateTaxPer, localTaxPer;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Please input the total sales for the month \n";
    cin >> totalSales;
    cout << "Please input the state tax percentage in decimal form (.02 for 2%) \n";
    cin >> stateTax;
    cout << "Please input the local tax percentage in decimal form (.02 for 2%) \n";
    cin >> localTax;

    stateTaxPer = stateTax * totalSales;
    localTaxPer = localTax * totalSales;
    cout << "The total sales for the month is $" << totalSales << endl;
    cout << "The state tax for the month is $" << stateTaxPer << endl;
    cout << "The local tax for the month is $" << localTaxPer << endl;

    return 0;
}


