/*
Software Sales
A software company sells a package that retails for $99. Quantity discounts are given according to the following table.
Quantity Discount
10–19 20%
20–49 30%
50–99 40%
100 or more 50%
Write a program that asks for the number of units purchased and computes the total cost of the purchase.
Input Validation: Make sure the number of units is greater than 0.
*/

//Hue Anh Huynh
//2/8/17

#import<iostream>
using namespace std;

int main()
{
    int units;
    float cost;
    float each = 99; //cost per package

    cout << "Software Sales" << endl;
    cout << "Enter number of units bought: ";
    cin >> units;

    if(units > 0)
    {
        if(units <= 9)
        {
            cost = each * units;
        }
        else if(units > 9 && units < 20)
        {
            cost = (each * .8) * units;
        }
        else if(units > 19 && units < 50)
        {
            cost = (each * .7) * units;
        }
        else if(units > 49 && units < 100)
        {
            cost = (each * .6) * units;
        }
        else if(units > 99)
        {
            cost = (each * .5) * units;
        }

        cout << "Total Cost: $" << cost << endl;
    }
    else
    {
        cout << "You did not enter a valid amount of units" << endl;
    }

    return 0;
}

