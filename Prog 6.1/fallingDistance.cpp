/*Falling Distance
The following formula can be used to determine the distance an object falls due to gravity
in a specific time period:
d = (g * pow(t,2)) / 2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is
the time in seconds that the object has been falling.
Write a function named fallingDistance that accepts an object’s falling time (in seconds)
as an argument. The function should return the distance, in meters, that the object
has fallen during that time interval. Write a program that demonstrates the function by
calling it in a loop that passes the values 1 through 10 as arguments, and displays the
return value.
*/

//Hue Anh Huynh
//3/6/17


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double fallingDistance(double fallingTime);

int main()
{
    cout << "   Time(s)       Distance(m)" << endl;

    for(int i = 1; i <= 10; i++)
    {
        cout << "     " << i << setw(17) << fallingDistance(i);
        cout << endl;

    }

	return 0;
}

double fallingDistance(double t)
{
    double d;

    d = (9.8 * pow(t,2)) / 2;

    return d;
}
