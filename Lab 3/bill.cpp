// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Hue Anh Huynh
// 1/30/17

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(2) << fixed << showpoint;	// formatted output
	cout << "Please input the number of items bought" << endl;
	cin >> quantity;
    cout << "Please input the price of each item" << endl;
	cin >> itemPrice;
	totalBill = quantity * itemPrice;
    cout << "The total bill is $" << totalBill << endl;

	return 0;
}

/*
Exercise 2 (the results)
    Please input the number of items bought
    2
    Please input the price of each item
    3
    The total bill is $6.0
    The fixed attribute in the cout statement makes it so the float variable has
    exactly 2 values after the decimal point no matter what.
Exercise 3
    Please input the number of items bought
    2
    Please input the price of each item
    6
    The total bill is $12.0000
    The setprecision() attribute in the cout statement decides how many values
    after the decimal point there will be. For example setprecision(4) makes it
    so that there are 4 values after the decimal point.


*/
