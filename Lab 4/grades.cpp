// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Hue Anh Huynh
// 2/6/17

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if(average <= 100 && average >= 90)
    {
        cout << "You got an A" << endl;
    }
    else if(average <= 89 && average >= 80)
    {
        cout << "You got a B" << endl;
    }
	else if(average <= 79 && average >= 60)
    {
		cout << "You Pass" << endl;
    }

	else if(average < 60 && average > -1)
    {
        cout << "You Fail" << endl;
    }
    else //if(average > 100) //when it is negative or over 100
    {
        cout << "Invalid data" << endl;
    }

	return 0;
}

/*
Exercise 1: Run the program three times using 80, 55 and 60 for the average.
What happens when you input 60 as the average? Modify the first if
statement so that the program will also print “You Pass” if the average
equals 60.
    Input your average:
    80
    You Pass
    Input your average:
    55
    You Fail
    Input your average:
    60

    When you input 60 as the average it doesn't result in a "You Pass"
    or "You Fail" output because of a logical error in the if statement

Exercise 3: Modify the program from Exercise 2 to allow the following categories:
Invalid data (data above 100), ‘A’ category (90–100), ‘B’ category
(80–89), “You Pass” category (60–79), “You Fail” category (0–59).
What will happen to your program if you enter a negative value such as -12?
    If you enter a negative number the program will only end and not output
    anything. This was my original else/if statement for printing out "Invalid output"
        else if(average > 100)
    However, I fixed that by using an else at the end instead of else if.
    The else will print "Invalid data" out if the user enters any number that is
    not between 0-100.
*/
