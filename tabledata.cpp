#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float price1, price2; 
    int quantity1, quantity2;

cout << setprecision (2) << fixed << showpoint;
cout << "Please input the price and quantity of the first item" << endl;
cin >> price1;
cin >> quantity1;

cout << "Please input the price and quantity of the second item" << endl;
cin >> price2;
cin >> quantity2;

cout << endl;
cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
cout << setw(15) << price1 << setw(7) << quantity1 << endl;
cout << setw(15) << price2 << setw(7) << quantity2 << endl;

    return 0;
}    


