//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

void letterGrade(int, int, char &, int &);

int main()
{
    int no, numericGrade , avg,sumGrade=0;
    char grade;
    cout<< "Enter the number of grades \n";
    cin>> no;

    for (int i=1; i<=no ; i++)
    {
        cout<<"Enter a numeric grade between 0-100 \n";
        cin>> numericGrade;
        sumGrade +=numericGrade;
    }
    letterGrade(sumGrade,no,grade, avg);
    cout<<"Your grade is "<< grade <<endl;
    return 0;
}

void letterGrade(int sum,int num,char &Grade, int &average)
{
    average= sum/num;
    if (average>=90 & average<=100)
        Grade = 'A';
    else if (average>=80 & average<=89)
        Grade = 'B';
    else if (average>=70 & average<=79)
        Grade = 'C';  
    else if (average>=60 & average<=69)
        Grade = 'D';
    else
        Grade = 'F';                 
}


