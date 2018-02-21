// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Hue Anh Huynh
// 2/15/17

#include <iostream>
using namespace std;

int main()
{
	int month = 1;
	float total = 0, rain;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;
    cin >> rain;


	while(rain != -1)
	{
		total = total + rain;
		month++;

		cout << "Enter the total rainfall in inches for month "
			 << month << endl;
		cout << "Enter -1 when you are finished" << endl;
		cin >> rain;
	}

	if (month == 1)
		cout << "No data has been entered" << endl;

	else
		cout << "The total rainfall for the " << month - 1
		     << " months is " << total << " inches." << endl;

	return 0;
}

/*
Exercise 4: Complete the program above by filling in the code described in the
statements in bold so that it will perform the indicated task.

Exercise 5: Run the program several times with various input. Record your
results. Are they correct? What happens if you enter –1 first? What happens
if you enter only values of 0 for one or more months? Is there any numerical
data that you should not enter?
    If you enter -1 first it outputs "No data has been entered". If you enter
    0 the month still increments but 0 gets added to total which means total
    doesn't change. You should not enter any negative numbers aside from -1
    because it will change the total  by taking away from the total rainfall.

Exercise 6: What is the purpose of the following code in the program above?
if (month == 1)
cout << "No data has been entered" << endl;
    This code checks the case of if the user started off by entering -1 to
    end the program at month 1. By exiting before entering any other values,
    it makes the program output "No data has been entered"
*/
