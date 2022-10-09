//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    int noOfDays;
    float numHours, total, average, mean;
    int student, day = 0; 
    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl;
    cin >> numStudents;
    cout<<"How many days you want to work?"<<endl;
    cin>> noOfDays;
    for (student = 1; student <= numStudents; student++)
    {
        total = 0;
        for (day = 1; day <= noOfDays; day++)
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << "." << endl;
            cin >> numHours;

            mean = static_cast<float>(total);
            total = total + numHours;
        }
        average = total / noOfDays;
        cout << endl;
        cout << "The average number of hours per day spent programming by "
             << "student " << student << " is " << average << endl;
        cout<<endl;
    }
    

    return 0;
}



