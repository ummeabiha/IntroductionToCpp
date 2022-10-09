#include <iostream>
#include <iomanip>
using namespace std;

const float American_chairs = 85.00;
const float Modern_chairs = 57.50;
const float French_chairs = 127.75;

int main()
{
    int American;
    int Modern;
    int French;

    float American_sales;
    float Modern_sales;
    float French_sales;
    float Total_sales;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the number of American Colonial chairs sold" << endl;
    cin >> American;
    cout << "Please input the number of Modern chairs sold" << endl;
    cin >> Modern;
    cout << "Please input the number of French Classical chairs sold" << endl;
    cin >> French;

    American_sales= American*American_chairs;
    Modern_sales= Modern*Modern_chairs;
    French_sales= French*French_chairs;
    Total_sales= American_sales+Modern_sales+French_sales;


    cout << "The total sales of American Colonial chairs $" << American_sales << endl;
    cout << "The total sales of Modern chairs $" << Modern_sales << endl;
    cout << "The total sales of French Classical chairs $" << French_sales << endl;
    cout << "The total sales of all chairs $" << Total_sales << endl;

    return 0;
}





