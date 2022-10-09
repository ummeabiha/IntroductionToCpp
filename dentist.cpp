//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

float totalCharge1(float, float);
float totalCharge2(float, float,float);

int main()
{
    cout<< setprecision(2)<<fixed;
    int num;
    float serviceCharge, testCharge, medicineCharge;
    cout<< "Please input a 1 if you are a member of the dental plan"
    <<"\nInput any other number if you are not \n";
    cin>> num;

    if(num==1)
    {
        cout<< "Please input the service charge \n";
        cin>> serviceCharge;
        cout<< "Please input the test charges \n";
        cin>> testCharge;
        cout<<"The total bill is $"<< totalCharge1(serviceCharge,testCharge)<< endl;
    }
    else
    {
        cout<< "Please input the service charge \n";
        cin>> serviceCharge;
        cout<< "Please input the test charges \n";
        cin>> testCharge;
        cout<< "Please input the medicine charge \n";
        cin>> medicineCharge;
        cout<<"The total bill is $"<< totalCharge2(serviceCharge,testCharge,medicineCharge)<< endl;
    }
      
    return 0;
}

float totalCharge1(float service, float test)
{
   float totalBill= service+test;
   return totalBill;
}

float totalCharge2(float service, float test, float medicine)
{
   float totalBill= service+test+medicine;
   return totalBill;
}


