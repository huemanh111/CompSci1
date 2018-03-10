//This program calculates the movie theater's gross and net box
//office profit for a night

// Hue Anh Huynh
// 2/1/17


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string mName;
    int aTickets, kTickets;
    float grossP, paidDist, netP; //gross profit, amount paid to distributor, net profit

	cout << setprecision(2) << fixed << showpoint;
	cout << "Movie Name: ";
	cin >> mName;
	cout << "Adult Tickets Sold: ";
	cin >> aTickets;
	cout << "Kid Tickets Sold: ";
	cin >> kTickets;

	grossP = (aTickets*6) + (kTickets*3);
	paidDist = grossP * .8;
	netP = grossP - paidDist;

	cout << "Gross Box Office Profit:" << setw(10) << "$" << grossP << endl;
	cout << "Amount Paid to Distributor:" << setw(7) << "$" << paidDist << endl;
	cout << "Net Box Office Profit:" << setw(12) << "$" << netP << endl;

	return 0;
}
