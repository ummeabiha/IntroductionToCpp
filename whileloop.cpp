// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
using namespace std;
int main()
{
    char letter = 'a';
    while (letter != 'x')
    {
        cout << "Please enter a letter" << endl;
        cout <<"Enter 'x' to exit the loop"<<endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
    }
    return 0;
}