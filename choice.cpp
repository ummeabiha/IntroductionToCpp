//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

const float kilometer = 0.621f;
const float mile= 1.61f;

float conversion(int, float);

int main()
{
    int num=0, miles, km;

    while(num!=3)
    {    
    cout<< "Please input \n"
        << "1 Convert miles to kilometers \n"
        << "2 Convert kilometers to miles \n"
        << "3 Quit \n";
    cin>> num;    
    
    if (num==1)
    {
        cout<<"Please input the miles to be converted \n";
        cin>> miles;
        cout << miles << " miles = " << conversion(num,miles) << " kilometers \n";
    }
    else if (num==2)
    {
        cout<<"Please input the kilometers to be converted \n";
        cin>> km;
        cout << km << " kilometers = " << conversion(num,km) << " miles \n";
    }
    else if (num==3)
    {
       cout<< "\n";
    }
    else
    {
        cout<<"Invalid Input \n";
    }
    }
    
    return 0;
}

float conversion(int no,float distance)
{
   if (no==1)
   {
    float kms= distance*mile;
    return kms;
   }
    else if (no==2)
   {
    float miles= distance*kilometer;
    return miles;
   }
}


