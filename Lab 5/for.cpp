// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Hue Anh Huynh
// 2/15/17

#include <iostream>
using namespace std;

int main()
{
	int value, value2;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive
	int v = 0;

	cout << "Please enter a positive integer" << endl;
	cin >> value;
	cout << "Please enter another positive integer" << endl;
	cin >> value2;

	if (value > 0)
	{
		for (number = value; number <= value2; number++)
		{
			total = total + number;
			v++;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / v;	// note the use of the typecast
													// operator here
		cout << "The mean average of the first " << v
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}

/*
Exercise 1: Why is the typecast operator needed to compute the mean in the
statement mean = static_cast(float)(total)/value;? What do you think
will happen if it is removed? Modify the code and try it. Record what happens.
Make sure that you try both even and odd cases. Now put static_cast<float>
total back in the program.
    You need to cast the mean to a float in order to be more accurate. Without
    the type cast the program will return an int value.

Exercise 2: What happens if you enter a float such as 2.99 instead of an integer
for value? Try it and record the results.
    The mean would be 1.5 because only the number before the decimals would count

Exercise 3: Modify the code so that it computes the mean of the consecutive
positive integers n, n+1, n+2, . . . , m, where the user chooses n and m.
For example, if the user picks 3 and 9, then the program should find the
mean of 3, 4, 5, 6, 7, 8, and 9, which is 6.

*/
