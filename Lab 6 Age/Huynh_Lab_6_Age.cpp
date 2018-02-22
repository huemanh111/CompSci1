/*Hue Anh Huynh
  3/22/17
This program takes the birthday of the user and another date.
After validating that the dates are actually on the calender,
it finds the difference between the two dates and then returns
that.
*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>

using namespace std;


bool enterDate(int& m, int& d, int& y);
bool enterBirthDate(int cmonth, int cdate, int cyear, int& bmonth, int& bday, int& byear);
bool validDate(int m, int d, int y);
bool dateBefore(int month1, int day1, int year1, int month2, int day2, int year2);
bool maxC(int c); //when count reaches 3 which is limit
void calculateAge(int cmonth, int cday, int cyear, int bmonth, int bday, int byear, int& tmonths, int& tdays, int& tyear);
int stringToInt(string date);


int main()
{
    int m, d, y; //CURRENT DATE  month, day, year
    int bM, bD, bY; //BIRTHDAY  month, day, year
    int tM, tD, tY; //TOTAL month, day, year

    cout << "AGE CALCULATOR" << endl;
    cout << "Enter a date in MM/DD/YYYY format" << endl;
    cout << "Ex: January 1, 2012 would be 01/01/2012" << endl;

    if(enterDate(m, d, y))
    {
        cout << "Enter your birthday in MM/DD/YYYY format " << endl;
        if (enterBirthDate(m, d, y, bM, bD, bY))
        {
            cout << "==============================================" << endl;
            cout << "Date: " << m << "/" << d << "/" << y << endl;
            cout << "Birthday: " << bM << "/" << bD << "/" << bY << endl;
            calculateAge(m, d, y, bM, bD, bY, tM, tD, tY);

            cout << "Your age in years, months, and days follows as" << endl;
            cout << "Year(s): " << tY << endl;
            cout << "Month(s): " << tM << endl;
            cout << "Day(s): " << tD << endl;
        }
    }

    return 0;
}

//converts the string into integers
int stringToInt(string date)
{
    int sum = 0;
    int a[(0,1,2,3,4,5,6,7,8,9)];

    for (int i = 0; i <= 9; i++)
    {
        switch (date[i]) //array is made up of 10 indexes b/c the two slashes count in MM/DD/YYYY
        {
            case '0': a[i] = 0;
                    break;
            case '1': a[i] = 1;
                    break;
            case '2': a[i] = 2;
                    break;
            case '3': a[i] = 3;
                    break;
            case '4': a[i] = 4;
                    break;
            case '5': a[i] = 5;
                    break;
            case '6': a[i] = 6;
                    break;
            case '7': a[i] = 7;
                    break;
            case '8': a[i] = 8;
                    break;
            case '9': a[i] = 9;
                    break;
            default:break;
        }
    }
    for (int i = 0; i < date.length(); i++)
    {
        sum = sum + a[i] * pow(10, date.length() - i - 1);
    }

    return sum;
}

//separates string into the respective month, day, and year
bool enterDate(int& m, int& d, int& y)
{
    string date; //string that the user entered
    string month, day, year; //these string are separated from date
    int c = 0; //count of invalid inputs

    do{
        cin >> date;
        month = date.substr(0,2); //the month section of the string
        day = date.substr(3,2); //the day section of the string
        year = date.substr(6,4); //the year section of the string

        m = stringToInt(month);
        d = stringToInt(day);
        y = stringToInt(year);

        if(!validDate(m, d, y) == true)
        { //sees if dates are valid
            c++;
            c = 3 - c;
            if(c != 3)
            {
                cout << "Invalid date. Please enter a date in MM/DD/YYYY format" << endl;
            }
        }
    }while(!validDate(m, d, y) && (c < 3));

    return maxC(c);
}

//
bool enterBirthDate(int cmonth, int cdate, int cyear, int& bmonth, int& bday, int& byear)
{
//    string date; ================================================================================================================
//    string month, day, year;
    int c = 0;

    do{
        enterDate(bmonth, bday, byear);
        if (!dateBefore(bmonth, bday, byear, cmonth, cdate, cyear) == true)
        {
            c++;
            c = 3 - c;
            if(c != 3)
            {
                cout << "Invalid date. Please enter a date in MM/DD/YYYY format" << endl;
            }
        }
    }while(!dateBefore(bmonth, bday, byear, cmonth, cdate, cyear) && (c < 3));

    return maxC(c);

}


//if c = 3, program stops (used to keep track of count)
bool maxC(int c)
{
    if (c == 3)
        cout << "You entered invalid dates too often. The program will now exit." << endl;
    return (c < 3);
}


//checks for validity of months and days and makes sure none are negative
bool validDate(int m, int d, int y)
{
    bool valid = true;
    if (y <= 0)
    { //checks to make sure year is not negative #
        valid = false;
    }
    else if(m <= 0 || m >= 13)
    { //checks to make sure month is between 1 and 12
        valid = false;
    }
    else if(d <= 0)
    { //checks to make sure date is not negative #
        valid = false;
    }
    else if ((m == 2) && (d >= 29))
    { //checks to make sure these specific months reach 28 days
        valid = false;
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && (d >= 31))
    { //checks to make sure these specific months reach 30 days
        valid = false;
    }
    else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d >= 32))
    { //checks to make sure these specific months reach 31 days
        valid = false;
    }

    return valid;
}

//checks to make sure the dates can be compared
bool dateBefore(int month1, int day1, int year1, int month2, int day2, int year2)
{
    bool before = true;

    if (year2 == year1)
    {
        if (month1 > month2)
        {
            before = false;
        }
        else if ((month1 == month2) && (day1 > day2))
        {
            before = false;
        }
    }
    else if (year2 < year1)
    {
        before = false;
    }
    return before;
}

//calculates diff between both dates
void calculateAge(int cmonth, int cday, int cyear, int bmonth, int bday, int byear, int& tmonths, int& tdays, int& tyears)
{
    tyears = cyear - byear;

    if (cmonth > bmonth)
    {
        tmonths = cmonth - bmonth;
    }
    else if (cmonth < bmonth)
    {
        tmonths = 12 - bmonth + cmonth;
        tyears = tyears - 1;
    }
    else if (cmonth == bmonth)
    {
        tmonths = 0;
    }
    tdays = 0;

    if (cday < bday)
    {

        switch (cmonth)
        {
            case 1: tdays = tdays + 31; //January
                    break;
            case 2: tdays = tdays + 28; //February
                    break;
            case 3: tdays = tdays + 31; //Marcb
                    break;
            case 4: tdays = tdays + 30; //April
                    break;
            case 5: tdays = tdays + 31; //May
                    break;
            case 6: tdays = tdays + 30; //June
                    break;
            case 7: tdays = tdays + 31; //July
                    break;
            case 8: tdays = tdays + 31; //August
                    break;
            case 9: tdays = tdays + 30; //September
                    break;
            case 10: tdays = tdays + 31; //October
                    break;
            case 11: tdays = tdays + 30; //November
                    break;
            case 12: tdays = tdays + 31; //December
                    break;
            default: break;
        }

        if (tmonths == 0)
        {
            tmonths = 11;
            tyears--;
        }
        else if(tmonths != 0)
        {
            tmonths--;
            tdays = tdays + (cday - bday - 1);
        }
    }
    else
    {
        tdays = tdays + (cday - bday);
    }
}

