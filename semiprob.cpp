#include <iostream>
using namespace std;

int main()
{
    int number;
    float total;
    cout << "Today is a great day for Lab" << endl;
    cout << "Let's start off by typing a number of your choice" << endl;
    cin >> number;
    total = number * 2;
    cout << total << " is twice the number you typed" << endl;
    return 0;
}

int main()
{
    cout << "Now is the time for all good men" << endl;
    cout << "To come to the aid of their party" << endl;

    return 0;
}

int main()
{
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << c << " is a vowel.";
    }
    else
    {
        cout << c << " is a consonant.";
    }

    return 0;
}
