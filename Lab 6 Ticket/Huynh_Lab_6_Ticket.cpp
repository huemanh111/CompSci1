//Hue Anh Huynh
//3/28/17


#include<string>
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int cancel(char c);
char getType();
char getTrip();
char getTime();
char anotherTicket();
double getCost(char type, char trip, char time);
double getPaid(double paid); //paid amount
double calculateChange(double price, double paid);
void showCost(char type, char trip, char time, double cost);


int main()
{
    char type, trip, time = 'X'; //so you can cancel anytime
    double ticketCost;
    double totalAmount;
    double totalCharge;
    char ticket;

    cout << "Ticket Price Calculator" << endl;

    do{
        type = getType();
        if(type != 'X' && type != 'x')
        {
            trip = getTrip();
        }
        if(trip != 'X' && trip != 'x')
        {
            time = getTime();
        }
        if(type != 'X' && type != 'x' && trip != 'X' && trip != 'x' && time != 'X' && time != 'x')
        {
            ticketCost = getCost(type, trip, time);
            totalAmount = getPaid(ticketCost);
            if (totalAmount > 0)
            {
                totalCharge = calculateChange(ticketCost, totalAmount);
            }
        }
        ticket = anotherTicket();

    }while(type != 'X' && type != 'x' && trip != 'X' && trip != 'x' && time != 'X' && time != 'x' && ticket != 'N' && ticket != 'n' );
    return 0;
}



int cancel(char c)
{
    if(c == 'X' || c == 'x')
    {
        cout << "Transaction canceled." << endl;
    }
    return 0;
}

char getType()
{
    char t; //type of ticket (reg, elderly/special, child)
    do{
        cout << "Enter R for Regular, S for Senior or C for Child: ";
        cin >> t;

        cancel(t);

        if(t != 'R' && t != 'r' && t != 'S' && t != 's' && t != 'C' && t != 'c')
        {
            cout << "Invalid input" << endl;
        }
    }while(t != 'X' && t != 'x' && t != 'R' && t != 'r' && t != 'S' && t != 's' && t != 'C' && t != 'c');

    return t;
}

char getTrip()
{
    char t; //one way or round trip
    do{
        cout << "Enter O for one way or R for round trip: ";
        cin >> t;

        cancel(t);

        if(t != 'O' && t != 'o' && t != 'R' && t != 'r')
        {
            cout << "Invalid input" << endl;

        }


    }while(t != 'X' && t != 'x' && t != 'O' && t != 'o' && t != 'R' && t != 'r');

    return t;
}

char getTime()
{
    char t; //time you go (peak hours or of peak)
    do{
        cout << "Enter P for peak or O for off-peak: ";
        cin >> t;

        cancel(t);

        if (t != 'P' && t != 'p' && t != 'O' && t != 'o')
            cout << "Invalid input" << endl;


    }while (t != 'X' && t != 'x' && t != 'P' && t != 'p' && t != 'O' && t != 'o');

    return t;

}

char anotherTicket()
{
    char t;
    do{
        cout << "Another ticket purchase? Enter Y for yes N for no: ";
        cin >> t;
        if(t == 'X' || t == 'x' || t =='N' || t == 'n')
        {
            cout << "Transaction Completed" << endl;
        }
        else if (t != 'X' && t != 'x' && t !='N' && t != 'n' && t != 'y' && t != 'Y')
        {
            cout << "Invalid Input" << endl;
        }

    }while(t != 'X' && t != 'x' && t != 'N' && t != 'n' && t != 'y' && t != 'Y');

    return t;

}


double getCost(char type, char trip, char time)
{
    double c; //cost

    if(trip == 'R' || trip == 'r')
    {
        if(time == 'P' || time == 'p' )
        {
            if(type == 'C' || type == 'c')
            {
                c = 8.50;
            }
            else
            {
                c = 17.50;
            }
        }
        else
        {
            if(type == 'S' || type == 's') //senior/special
            {
                c = 8.50;
            }
            else if (type == 'C' || type == 'c') //child
            {
                c = 6.50;
            }
            else //regular
            {
                c = 13.00;
            }
        }
    }
    else
    {
        if(time == 'P' || time == 'p') //peak time
        {
            if(type == 'R' || type == 'r')
            {
                c = 8.75;
            }

            else
            {
                c = 4.25;
            }
        }
        else if(time == 'O' || time == 'o')
        {
            if(type == 'S' || type == 's')
                c = 4.25;
            else if (type == 'C' || type == 'c')
                c = 3.25;
            else
                c = 6.50;
        }
    }
    showCost(type, trip, time, c);
    return c;
}

double getPaid(double p)
{
    double m;
    cout << "Enter your payment: ";
    cin >> m;
    if (m == 0)
        cout << "Transaction cancelled." << endl;
    return m;
}

double calculateChange(double price, double paid)
{
    double c; //change
    cout << setprecision(2) << fixed << showpoint << endl;
    c = paid - price;
    cout << "Your change is $" << c << endl;
    return c;
}

void showCost(char type, char trip, char time, double cost)
{
    string typeTicket;
    string tripTicket;
    cout << setprecision(2) << fixed << showpoint << endl;

    if(type == 'R' || type == 'r')
    {
        typeTicket = "Regular";
    }
    else if(type == 'S' || type == 's')
    {
        typeTicket = "Senior";
    }
    else
    {
        typeTicket ="Child";
    }
    if(trip == 'R' || trip == 'r')
    {
        tripTicket = "round-trip";
    }
    else
    {
        tripTicket = "one-way";
    }
    if (time == 'P' || time == 'p')
    {
        tripTicket = "peak";
    }
    else
    {
        tripTicket = "off-peak";
    }
    cout << "The cost for a " << typeTicket << " " << tripTicket << " ticket is $" << cost << endl;
}
