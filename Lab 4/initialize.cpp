// This program tests whether or not an initialized value
// is equal to a value input by the user

// Hue Anh Huynh
// 2/6/17

#include <iostream>
using namespace std;

int main()
{
	int num1,	// num1 is not initialized
	num2 = 5;	// num2 has been initialized to 5

	cout << "Please enter an integer" << endl;
	cin >> num1;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2)
    {
        cout << "The values are the same." << endl;
		cout << "Hey, that's a coincidence!" << endl;
    }

	else //if (num1 != num2)
    {
        cout << "The values are not the same" << endl;
    }

	return 0;
}

/*
Exercise 1: Run the program several times using a different input each time.
Does the program do what you expect? Is so, explain what it is doing. If
not, locate the error and fix it.
    Please enter an integer
    12
    num1 = 12 and num2 = 5
    Hey, that's a coincidence!

    The program says that all numbers are equal to num2 because in the if
    statement it sets num1 = num2 instead of comparing num1 to num2 with
    the use of ==
*/
