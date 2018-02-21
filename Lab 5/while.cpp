// Hue Anh Huynh
// 2/15/17

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

    cout << "Enter x to end the program." << endl;

    do
    {
        cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
    }
    while(letter != 'x');
/*
	while (letter != 'x')
	{
		cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	}
*/
	return 0;
}

/*
Exercise 1: This program is not user friendly. Run it a few times and explain
why.
    This program is not user friendly because it only ends right after you guess
    x. If x is not entered it doesn't stop which means it would take a lot of tries
    for the user to end it or if they choose to they may force close it.
Exercise 2: Add to the code so that the program is more user friendly.
Exercise 3: How would this code affect the execution of the program if the
while loop is replaced by a do-while loop? Try it and see.
    There is no difference in this program but for the do-while loop the loop will
    iterate at least once.
*/
