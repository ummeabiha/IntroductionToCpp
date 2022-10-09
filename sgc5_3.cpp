#include <iostream>
using namespace std;

int main()
{
    int num, year1, year2, year3;
    int total=0;
    cout << "How many tellers worked at National Bank during each of the last three years ? \n";
    cin >> num;

    for (int i=1; i <= num; i++)
    {
        cout << "How many days was teller " << i << " out sick during year 1 ?\n";
        cin >> year1;
        total+= year1;
        cout << "How many days was teller " << i << " out sick during year 2 ?\n";
        cin >> year2;
        total+= year2;
        cout << "How many days was teller " << i << " out sick during year 3 ?\n";
        cin >> year3;
        total+= year3;
    }
    
    cout << "The "<< num << " tellers were out sick for a total of "
    << total << " days during the last three years";
    
    return 0;
}
