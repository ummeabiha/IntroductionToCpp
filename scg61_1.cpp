//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

int main()
{
    int first, second, temp;
    cout<<"Enter the first number "<<endl;
    cout<<"Then hit enter "<<endl;
    cin>> first;
    
    cout<<"Enter the second number "<<endl;
    cout<<"Then hit enter "<<endl;
    cin>> second;

    cout<<"You input the numbers as "<<first << " and " << second <<endl;

    temp=first;
    first= second;
    second= temp;

    cout<< "After swapping, the first number has the value of "<< first <<
    " which was the value of the second number" <<endl;
    cout<< "The second number has the value of "<<second << 
    " which was the value of the first number" <<endl;

    return 0;
}


