#include <iostream>
using namespace std;

const int length = 8;
const int width = 3;

int main()
{
    int area;
    int perimeter;

    perimeter = 2 * (length + width);
    area = length * width;

    cout << "The perimeter of the rectangle is " << perimeter << endl;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}



