// This program illustrates the use of the switch statement.

// Hue Anh Huynh
// 2/6/17


/*
Option 3: The University of Guiness charges $3000 per semester for in-state
tuition and $4500 per semester for out-of-state tuition. In addition, room
and board is $2500 per semester for in-state students and $3500 per
semester for out-of-state students. Write a program that prompts the user
for their residential status (i.e., in-state or out-of-state) and whether they
require room and board (Y or N). The program should then compute and
output their bill for that semester.
*/

// Hue Anh Huynh
// 2/7/17


#include <iostream>
using namespace std;

int main()
{
    int rStatus;
    char room;
    int tuition;

    cout << "Hello! This program will calculate your bill for you.\n";
    cout << "Enter 1 if you're an in-state student or 2 if you're an out-of-state student.\n";
    cout << "Residency Status: ";
    cin >> rStatus;
    cout << "Enter Y if you need a room and board and N if you do not: ";
    cin >> room;

    if(rStatus == 1 && (room == 'N' || room == 'n'))
    {
        tuition = 3000;
        cout << "Tuition: $" << tuition << endl;
    }
    else if(rStatus == 1 && (room == 'Y' || room == 'y'))
    {
        tuition = 5500;
        cout << "Tuition: $" << tuition << endl;
    }
    else if(rStatus == 2 && (room == 'N' || room == 'n'))
    {
        tuition = 4500;
        cout << "Tuition: $" << tuition << endl;
    }
    else if(rStatus == 2 && (room == 'Y' || room == 'y'))
    {
        tuition = 8000;
        cout << "Tuition: $" << tuition << endl;
    }
    else
    {
        cout << "You did not enter valid inputs.\n";
    }


	return 0;
}
