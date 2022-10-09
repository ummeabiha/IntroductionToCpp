// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float &);
void findCircumference(float, float &);
int main()
{
    cout << fixed << showpoint << setprecision(2);
    float radius = 12;
    cout << "Main function outer block" << endl;
    cout << "PI, RATE and radius are active here \n"
         << endl;
    {
        float area;
        cout << "Main function first inner block" << endl;
        cout << "PI, RATE, radius and area are active here" << endl;
        area = PI * radius * radius;
        cout << "The radius = " << radius << endl;
        cout << "The area = " << area << endl
             << endl;
    }
    {
        float radius = 10;
        float circumference;
        cout << "Main function second inner block" << endl;
        cout << "PI, RATE, radius and circumference are active here" << endl;
        circumference = 2 * PI * radius;
        cout << "The radius = " << radius << endl;
        cout << "The circumference = " << circumference << endl
             << endl;
    }
    {
        float area;
        float circumference;
        cout << "Main function after all the calls" << endl;
        cout << "PI, RATE, radius, area and circumference are active here \n"
             << endl;
        findArea(radius, area);
        findCircumference(radius, circumference);
    }
    return 0;
}

void findArea(float rad, float &answer)
{
    cout << "AREA FUNCTION" << endl;
    cout << "PI, RATE, radius and area are active here" << endl;
    answer = PI * rad * rad;
    cout << "The area = " << answer << endl
         << endl;
}

void findCircumference(float length, float &distance)
{
    cout << "CIRCUMFERENCE FUNCTION" << endl;
    cout << "PI, RATE, radius and circumference are active here" << endl;
    distance = 2 * PI * length;
    cout << "The circumference = " << distance << endl
         << endl;
}



