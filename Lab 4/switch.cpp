// This program illustrates the use of the switch statement.

// Hue Anh Huynh
// 2/6/17

/*
#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	switch (grade)	// This is where the switch statement begins
	{
		case 'A':   cout << "YOU PASSED!\n";
                    cout << "an A - excellent work !" << endl;
				    break;
		case 'B':   cout << "YOU PASSED!\n";
                    cout << "you got a B - good job" << endl;
		            break;
		case 'C':   cout << "YOU PASSED!\n";
                    cout << "earning a C is satisfactory" << endl;
		            break;
		case 'D':   cout << "YOU PASSED!\n";
		            cout << "while D is passing, there is a problem" << endl;
			        break;
		case 'F':   cout << "you failed - better luck next time" << endl;
		            break;
		default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}

	return 0;
}
*/
//~~~~~~~~~~~~~~~~~~~~~~VERSION 2~~~~~~~~~~~~~~~~~~~~~~~`~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if(grade == 'A' || grade == 'a')
    {
        cout << "YOU PASSED!\n";
        cout << "an A - excellent work !" << endl;
    }
    else if(grade == 'B' || grade == 'b')
    {
		cout << "YOU PASSED!\n";
        cout << "you got a B - good job" << endl;
    }
    else if(grade == 'C' || grade == 'c')
    {
		cout << "YOU PASSED!\n";
        cout << "earning a C is satisfactory" << endl;
    }
    else if(grade == 'D' || grade == 'd')
    {
		cout << "YOU PASSED!\n";
		cout << "while D is passing, there is a problem" << endl;
    }

    if(grade == 'F' || grade == 'f')
    {
        cout << "you failed - better luck next time" << endl;
    }
    else
    {
        cout << "You did not enter an A, B, C, D, or F" << endl;
	}

	return 0;
}

/*
Exercise 1: Bring in the file switch.cpp from the Lab 4 folder. This is Sample
Program 4.3 from the Pre-lab Reading Assignment. The code is shown
below. Remove the break statements from each of the cases. What is the
effect on the execution of the program?
    If you remove the break statements the program will go through every single
    case and print out all the lines.
Exercise 2: Add an additional switch statement that allows for a Passing option
for a grade of D or better. Use the sample run given below to model your
output.
    Sample Run:
    What grade did you earn in Programming I ?
    A
    YOU PASSED!
    an A - excellent work!

Exercise 3: Rewrite the program switch.cpp using if and else if statements
rather than a switch statement. Did you use a trailing else in your new
version? If so, what did it correspond to in the original program with the
switch statement?
    I did use a trailing else because it corresponded with the default statement
    in the switch statement.
*/

