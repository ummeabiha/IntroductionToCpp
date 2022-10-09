#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << fixed << showpoint;
    
    int quarter1,quarter2,quarter3,quarter4;
    float average;
    
    cout << "Please input your water bill for quarter1 " << endl;
    cin>> quarter1;
    cout << "Please input your water bill for quarter1 " << endl;
    cin>> quarter2;
    cout << "Please input your water bill for quarter1 " << endl;
    cin>> quarter3;
    cout << "Please input your water bill for quarter1 " << endl;
    cin>> quarter4;    

    average= float(quarter1+quarter2+quarter3+quarter4)/12;

    if (average>= 75)
    {
        cout << "Your average monthly bill is $" <<average
        <<  " .You are using excessive amounts of water.";
    }
    else if (average>=25 || average <=75)
    {
        cout << "Your average monthly bill is $" <<average
        << " .A typical amount of water is being used";
    }
    else 
        cout << "Your average monthly bill is $" <<average
        << " .Good Job! You're conserving water";
    
    return 0;
}