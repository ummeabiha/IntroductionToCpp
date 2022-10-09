#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    int coffee =0 , tea =0, coke=0, orange=0;
    int i=1;
    while (choice !=-1)
    {
        cout<< "Please input the favorite beverage of person#" << i << ": Choose 1, 2, 3, or 4"
            << " from the above menu or -1 to exit the program" << endl;
        cin >> choice;

        if (choice==1)
        {
            coffee +=1;
            ++i; 
        } 
        else if (choice==2)
        {
            tea +=1;
            ++i; 
        }

        else if (choice==3)
        {
            coke +=1;
            ++i; 
        }

        else if (choice==4)
        {
            orange +=1;
            ++i; 
        }
        else
        {
            cout << "Enter a valid choice!" << endl;
        }            
    }

    cout << "\nThe total number of people surveyed is " << i-1 << ". The results are as follows:" << endl;

    cout<< "Beverage" << setw(20) << "Number of Votes\n" 
        << "********************************"<< endl;
    cout << "Coffee" << setw(8) << coffee << endl;
    cout << "Tea" << setw(11) << tea << endl;
    cout << "Coke" << setw(10) << coke << endl;
    cout << "Orange Juice" << setw(2) << orange << endl;

    return 0;
}

