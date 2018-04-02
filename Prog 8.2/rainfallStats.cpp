/*Hue Anh Huynh
  4/3/17
Write a modular program that analyzes a year’s worth of rainfall data. It should store the
total rainfall for each of 12 months into an array of floats, and month names should be
stored in an array of Strings.
It should also have four value returning functions that compute and return to main the
totalRainfall, averageRainfall, driestMonth, and wettestMonth. These last two functions
return the number of the month with the lowest and highest rainfall amounts, not the
amount of rain that fell those months. Notice that this month number can be used to
obtain the amount of rain that fell those months. This information should be used either
by main or by a displayReport function called by main to print a summary rainfall report
similar to the following:
Austin Tx  Rainfall 2009
Jan          0.40
Feb          0.94
Mar          3.21
Apr          3.74
May          1.73
Jun          1.03
Jul          1.27
Aug          2.58
Sep          6.98
Oct          6.90
Nov          2.80
Dec          2.53
Total        34.11
Average      2.84
Max          6.98
Min          0.40
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


const int MONTHS = 12;

double totalRainfall(double rainfall[MONTHS]);
double averageRainfall(double rainfall[MONTHS]);
int driestMonth(double rainfall[MONTHS]);
int wettestMonth(double rainfall[MONTHS]);


int main()
{
    cout << setprecision(2) << fixed << endl;
    string months[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    double rainfall[MONTHS] = {.4, .94, 3.21, 3.74, 1.73, 1.03, 1.27, 2.58, 6.98, 6.9, 2.8, 2.53};
    double rainfallNum;

    cout << "Rainfall Data" << endl;
    cout << "Month   Rainfall" << endl;

    for(int num = 0; num < MONTHS; num++){
        cout << setw(8) << left << months[num] << rainfall[num] << endl;
    }

    cout << setw(8) << left << "Total" << totalRainfall(rainfall) << endl;
    cout << setw(8) << left << "Average" << averageRainfall(rainfall) << endl;
    cout << setw(8) << left << "Max" << rainfall[wettestMonth(rainfall)] << "     " << months[wettestMonth(rainfall)] << endl;
    cout << setw(8) << left << "Min" << rainfall[driestMonth(rainfall)] << "     " << months[driestMonth(rainfall)] << endl;

    return 0;
}


double totalRainfall(double rainfall[MONTHS])
{
    double total = 0;

    for (int i = 0; i < MONTHS; i++)
    {
        total += rainfall[i];
    }

    return total;
}

double averageRainfall(double rainfall[MONTHS])
{
    double total = 0;
    double average;

    for (int i = 0; i < MONTHS; i++)
    {
        total += rainfall[i];
    }
    average = total/12;

    return average;
}

int driestMonth(double rainfall[MONTHS])
{
    int dryMonth = 0;

    for (int i = 1; i < MONTHS; i++)
    {
        if (rainfall[i] < rainfall[dryMonth])
        {
            dryMonth = i;
        }
    }

    return dryMonth;
}

int wettestMonth(double rainfall[MONTHS])
{
    int wetMonth = 0;

    for (int i = 1; i < MONTHS; i++)
    {
        if (rainfall[i] > rainfall[wetMonth])
        {
            wetMonth = i;
        }
    }

    return wetMonth;
}
