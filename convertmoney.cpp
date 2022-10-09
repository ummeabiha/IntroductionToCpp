//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <iomanip>
using namespace std;

const float dollarToEuros= 1.06;
const float dollarToPesos= 9.73;
const float dollarToYen= 124.35;

// This program will input American money and convert it to foreign currency

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main ()
{
float dollars, euros, pesos, yen;
cout << fixed << showpoint << setprecision(2);
cout << "Please input the amount of American Dollars you want converted to euros and pesos\n";
cin >> dollars;
convertMulti(dollars,euros, pesos);
cout<<"$ "<< dollars << " is converted to " << euros << " euros and " << pesos <<" pesos \n" <<endl;

cout << "Please input the amount of American Dollars you want converted to euros, pesos and yen\n";
cin >> dollars;
convertMulti(dollars,euros, pesos, yen);
cout<<"$ "<< dollars << " is converted to " << euros << " euros, " << pesos <<" pesos and " 
    <<yen <<" yens \n"<<endl;


cout << "Please input the amount of American Dollars you want converted to yen \n";
cin >> dollars;
cout<<"$ "<<dollars << " is converted to "<< convertToYen(dollars) <<" yens\n" <<endl;


cout << "Please input the amount of American Dollars you want converted to euros" << endl;
cin >> dollars;
cout<<"$ "<< dollars << " is converted to "<< convertToEuros(dollars) <<" euros\n" <<endl;


cout << "Please input the amount of American Dollars you want converted to pesos " << endl;
cin >> dollars;
cout<<"$ "<<dollars << " is converted to "<< convertToPesos(dollars) <<" pesos\n" <<endl;

return 0;
}


void convertMulti(float dollars, float& euros, float& pesos)
{ 
cout << "The function convertMulti with dollars, euros and pesos was called with " 
<< dollars << " dollars" << endl;
euros= dollars*(dollarToEuros);
pesos= dollars*(dollarToPesos);  
}


void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
cout << "The function convertMulti with dollars, euros, pesos and yen"
      << " was called with " << dollars << " dollars" << endl;
euros= dollars*(dollarToEuros);
pesos= dollars*(dollarToPesos);  
yen= dollars * (dollarToYen);
}


float convertToYen(float dollars)
{
cout << "The function convertToYen was called with " << dollars <<" dollars"<< endl;
return ((dollars)*(dollarToYen));
}


float convertToEuros(float dollars)
{
cout << "The function convertToEuros was called with " << dollars << " dollars" <<endl;
return ((dollars)*(dollarToEuros));
}


float convertToPesos(float dollars)
{
cout << "The function convertToPesos was called with " << dollars << " dollars" << endl;
return ((dollars)*(dollarToPesos));
}

