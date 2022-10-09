//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

float wins();
float losses ();
float percentage(float, float);

int main()
{
    cout<<setprecision(2)<< fixed;
    
    float a=wins();
    float b=losses();
    
    cout<<"The percentage of wins is "<< percentage(a,b) <<" %"<<endl;
    return 0;
}

float wins()
{
    float win;
    cout<<"Please input the number of wins"<<endl;
    cin >> win;
    return win;
}

float losses ()
{
    float lose;
    cout<<"Please input the number of losses"<<endl;
    cin >> lose;
    return lose;
}

float percentage(float win, float lose)
{
    float sum= (win)/(win+lose);
    float per= sum*100;
    return per;
}

