// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

void normalizeMoney(float& dollars, int cents = 150); 

int main()
{
int cents;
float dollars;
cout << setprecision(2) << fixed << showpoint;
{
cents = 95;
cout << "\n We will now add 95 cents to our dollar total\n";
normalizeMoney(dollars,cents);
cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
}
{
cout << "\n We will now add 193 cents to our dollar total\n";
cents=193;
normalizeMoney(dollars,cents);
cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
}
{
cout << "\n We will now add the default value to our dollar total\n";
normalizeMoney(dollars);
cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
}
return 0;
}


void normalizeMoney(float& dollars, int cents)
{
float total=0;
static float sum=0.0;
dollars= float(cents)/100;
total += dollars;
sum += dollars; 
cout << "We have added another $" << dollars <<" to our total" << endl;
cout << "Our total so far is $" << sum << endl;
cout << "The value of our local variable total is $" << total << endl;
}




