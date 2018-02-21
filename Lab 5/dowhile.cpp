// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Hue Anh Huynh
// 2/15/17

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    float cost;
    char beverage;
	bool validBeverage;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee	        $1.00" << endl;
		cout << "B: Tea	                $0.75" << endl;
		cout << "C: Hot Chocolate	$1.25" << endl;
		cout << "D: Cappuccino	        $2.50" << endl << endl << endl;

		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;
		cin >> beverage;

		switch(beverage)
		{
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':
			case 'D': validBeverage = true;
				break;
			default: validBeverage = false;
		}

		if(validBeverage)
		{
			cout << "How many cups would you like?" << endl;
			cin >> number;
		}

		switch(beverage)
		{
			case 'a':
			case 'A': cost = number * 1.0;
				cout << "The total cost is $ " << cost << endl;
				break;
            case 'b':
            case 'B': cost = number * 0.75;
                cout << "The total cost is $ " << cost << endl;
                break;
            case 'c':
            case 'C': cost = number * 1.25;
                cout << "The total cost is $ " << cost << endl;
                break;
            case 'd':
            case 'D': cost = number * 2.50;
                cout << "The total cost is $ " << cost << endl;
                break;
			case 'e':
			case 'E': cout << " Please come again" << endl;
				break;
			default: cout << "Invalid selection.";
				 cout << " Try again please" << endl;
		}
	}
	while(!(beverage == 'E' || beverage == 'e'));

		return 0;

}

/*
Exercise 1: Fill in the indicated code to complete the above program. Then
compile and run the program several times with various inputs. Try all the
possible relevant cases and record your results.

Exercise 2: What do you think will happen if you do not enter A, B, C, D
or E? Try running the program and inputting another letter.
    If you do not enter A, B, C, D or E, the program will keep output
    "Invalid selection. Try again please" and output the menu again.

Exercise 3: Replace the line
if (validBeverage == true)
with the line
if (validBeverage)
and run the program again. Are there any differences in the execution of
the program? Why or why not?
    No differences because if(validBeverage) is the same as
    if(validBeverage == true). True is implied.
*/
