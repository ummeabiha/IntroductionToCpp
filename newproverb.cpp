// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <string>
using namespace std;

void writeProverb(int);

int main()
{
    int wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___" << endl;
    cout << "Input a 1 if you want the sentence to be finished with party" << endl;
    cout << "Input any other number for the word country" << endl;
    cout << "Please input your choice now" << endl;
    cin >> wordCode;
    cout << endl;

    writeProverb(wordCode);

    return 0;
}

void writeProverb(int number)
{
    if (number == 1)
    {
        cout << "For all good men to come to the aid of their party" << endl;
    }
    else if (number==2)
    {
        cout << "For all good men to come to the aid of their country" << endl;
    }
    else
    {
        cout << "I'm sorry but that is an incorrect choice; Please input a 1 or 2" << endl;
        cin >> number;
        writeProverb(number);
    }
}

