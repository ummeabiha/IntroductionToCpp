#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name[100];
    ifstream input;
    ofstream output;
    input.open("name.txt");
    output.open ("Names.txt");

    for (int i=0; i<100; i++)
    {
        cout << "Enter Name" << endl;
        input >> name[i];
    }

    for (int i=0; i<100; i++)
    {
        output << " " << name[i] << endl; 
    }
    
    return 0;
}