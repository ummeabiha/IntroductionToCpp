#include <iostream>
using namespace std;

const string FAVORITESODA = "Dr. Dolittle";
const char BESTRATING = 'A';

int main()
{
    char rating;
    string favoriteSnack;
    int numberOfPeople;
    int topChoiceTotal;

    favoriteSnack = "crackers";
    rating = 'B';
    numberOfPeople = 250;
    topChoiceTotal = 148;

    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << topChoiceTotal << " people " << numberOfPeople << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating << endl;
    return 0;
}


