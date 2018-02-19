// This program demonstrates the use of characters and strings

// Hue Anh Huynh
// 1/23/17

/*
Exercise 3:Is it possible to change the choice of FAVORITESODA by adding
code within the main module of the program? Why or why not?
It is not possible to change the value of FAVORITESODA within the main
module of the program because it is a constant variable which means you
can't edit it.

Exercise 4: Is it possible to change the choice of favoriteSnack by adding code
within the program? Why or why not?
It is possible to change the value of favoriteSnack within the program because
it is only a string variable which means it is not limited to being one constant
value like FAVORITESODA was.

*/

#include <iostream>
#include <string>
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
	cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << endl;

	return 0;
}
