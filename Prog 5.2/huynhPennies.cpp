/*Pennies for Pay
Write a program that calculates how much a person earns in a month if the salary is one
penny the first day, two pennies the second day, four pennies the third day, and so on
with the daily pay doubling each day the employee works. The program should ask the
user for the number of days the employee worked during the month and should display a
table showing how much the salary was for each day worked, as well as the total pay
earned for the month. The output should be displayed in dollars with two decimal
points, not in pennies.
Input Validation: Do not accept a number less than 1 or more than 31 for the number
of days worked. .(use a while or do-while loop for validation).
*/

// Hue Anh Huynh
// 2/17/17

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float salary = .01;
    int d = -1; //days worked
    int n = 0; //holder for days count; used so while do ends

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the number of days you worked during the month: ";
    cin >> d;

    do
    {
        cout << "Enter the number of days you worked during the month: ";
        cin >> d;
    }
    while(!(d > 0 && d < 32));

    do
    {
        cout << "Day" << setw(10) << "Salary";
        for(int i = 1; i <= d; i++)
        {
            salary = salary * 2.0;
            cout << endl << i << setw(8) << "$"<< salary;
            n++;
        }
    }
    while((d > 0 && d < 32) && n < d);

    cout << endl << endl;
	return 0;
}
