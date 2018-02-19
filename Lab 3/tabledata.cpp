// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

// Hue Anh Huynh
// 1/30/17

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float price1, price2;		// The price of 2 items
	int	quantity1, quantity2;	// The quantity of 2 items

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item" << endl;
	cin >> price1;
	cin >> quantity1;
	cout << "Please input the price and quantity of the second item" << endl;
	cin >> price2;
	cin >> quantity2;

	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
    cout << setw(11) << "$" << price1 << setw(7) << quantity1 << "\n";
	cout << setw(11) << "$" << price2 << setw(7) << quantity2 << "\n";


	return 0;
}
