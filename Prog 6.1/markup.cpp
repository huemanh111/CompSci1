/*Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup
percentage. It should then display the item’s retail price. For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s
retail price is 10.00.
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the wholesale
cost and the markup percentage as arguments, and returns the retail price of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the item
or the percent markup.
*/

//Hue Anh Huynh
//3/6/17


#include<iostream>
#include<iomanip>

using namespace std;

double calculateRetail(double wholeSaleCost, double markUpPercent);

int main()
{
    cout << setprecision(2) << fixed << showpoint;

    double wCost = -1; //wholesale cost
    double p = -1; //percent of mark up

    while(wCost < 0 || p < 0) //checks if these are negative
    {
        cout << "Enter a wholesale cost: $";
        cin >> wCost;
        cout << "Enter a markup percent: ";
        cin >> p;
    }

    cout << "The retail price is $" << calculateRetail(wCost, p);

	return 0;
}

double calculateRetail(double w, double m)
{
    w = w + (w * (m * .01));

    return w;
}

