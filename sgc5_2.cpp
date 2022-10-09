#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int time, height;
    float distance;

    cout << setprecision(1) << fixed << showpoint ;

    cout<< "Please input the time of fall in seconds:" << endl;
    cin>> time;
    cout << "Please input the height of the bridge in meters:"<< endl;
    cin >> height; 

    cout << "Time Falling (seconds)     Distance Fallen (meters)\n";
    cout << "***************************************************\n";
    
    for (int i=0; i<=time; i++)
    {
        distance = (0.5) * (9.8) * (i*i);
        cout << i << setw(30) << distance <<endl; 
    } 
    
    if (distance> height)
    {
        cout << "Warning-Bad Data: The distance fallen exceeds"
        << " the height of the bridge\n";
    }

    return 0;
}
