#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    cout << endl;

    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << endl;

    cout << "My name is " << name << " and age is " << age;

    return 0;
}





