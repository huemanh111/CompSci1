/*Hue Anh Huynh
  3/29/17
The program takes in the user's amount of spending money and
displays the things they can buy with their budget. If the user
does not have enough money for anything then it tells them to
make more money then come back. The user may only purchase 1 of
any item due to the store's limited stock and high demand.
If the user can afford any of the items, they may select from
stuff they have available to them then the program displays how
much money that have left to spend.
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


void displayChoices(double& budget); //displays the choices available for store using the correct numerical order
string getName(); //returns user name
bool canAfford(int choice, double budget); //returns true if the user can afford a specific item, false otherwise (called from function displayItems)
double getChoice(int& choice); //returns the user choice 1-4(uses the return value of function canAfford to determine if the user can afford the item they selected)
bool shopMore(); //returns true if the user wishes to continue shopping, false otherwise

const double HOMEDEPOT = 50.00;
const double MANPURFUME = 24.00; //cologne
const double KEYCHAIN = 14.00;
const double CARD = 4.00;


int main()
{
    string name;
    double budget, mLeft, price; //mleft is money left
    int purchase;
    bool again;

    cout << "SHOPPING SPREE" << endl;
    name = getName();
    cout << "Your Budget for this Shopping Spree: $";
    cin >> budget;
    cout << endl;

    do{
        cout << "Items within Your Budget" << endl;
        displayChoices(budget);
        cout << "Purchase Selection: ";
        cin >> purchase;
        price = getChoice(purchase);
        mLeft = budget - price;
 //       canAfford(purchase, mLeft);
        if(mLeft <= 0)
        {
            cout << "INSUFFICIENT FUNDS" << endl;
        }
        if(canAfford(purchase, mLeft) == true)
        {
            cout << "Amount Left to Spend: $" << mLeft << endl;
            budget = mLeft;
        }
        again = shopMore();
    }while(mLeft >= 4 && canAfford(purchase, mLeft) != false && again != false && purchase != 0);


    return 0;
}


string getName()
{
    string name;
    cout << "Please enter your first name: ";
    cin >> name;
    return name;
}

bool canAfford(int c, double b) //int choice, double budget
{
    if(getChoice(c) <= b)
    {
        return true;
    }
    else if (getChoice(c) >= b)
    {
        return false;
    }
    return true;
}

void displayChoices(double& b) //b for budget
{
    if (b >= CARD)
    {
        cout << "1. A card -> $4.00" << endl;
    }

    if (b  >= KEYCHAIN)
    {
        cout << "2. A keychain with a bathtub ornament -> $14.00" << endl;
    }

    if (b >= MANPURFUME)
    {
        cout << "3. A bottle of cologne (The One by Dolce Gabbana) -> $24.00" << endl;
    }

    if (b >= HOMEDEPOT)
    {
        cout << "4. A gift card to Home Depot -> $50.00" << endl;
    }
    cout << endl;
}

double getChoice(int& c)
{
    double price;
    switch(c)
    {
        case 0:
            cout << "Transaction Canceled" << endl;
            break;
        case 1:
            price = CARD;
            break;
        case 2:
            price = KEYCHAIN;
            break;
        case 3:
            price = MANPURFUME;
            break;
        case 4:
            price = HOMEDEPOT;
            break;
        default: //invalid input
//            cout << "Incorrect input" << endl;
            break;
    }
    return price;
}

bool shopMore()
{
    int c;
    do{
        cout << "Keep shopping? 1 for yes, 2 for no: ";
        cin >> c;

        if(c == 1)
        {
            return true;
        }

        else if(c == 2)
        {
            cout << "End of shopping spree" << endl;
            return false;
        }
        else
        {
            cout << "Invalid input, try again" << endl;
        }
    }while(c != 1 && c != 2);
}





