/*
Celsius to Fahrenheit Table

In one of the Chapter 3 Programming Challenges you were asked to write a program
that converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop
to display a table of the Celsius temperatures from 0 to 100 with increments of 10, and
their Fahrenheit equivalents. The formula follows:
T(°F) = T(°C) × 9/5 + 32
Do not substitute 1.8 for 9/5. Use integer literals 9 and 5 and type cast to get correct
answer
0°C = 32.0 °F
100°C = 212.0 °F
*/

//Hue Anh Huynh
//2-13-17


#import<iostream>
#import<cstdlib>
#include <iomanip>

using namespace std;

int main()
{

    double f;

    cout << setprecision(2) << fixed << showpoint;
    cout << setw(10) << "CELSIUS" << setw(16) << "FAHRENHEIT" << endl;

    for(int i = 0; i <= 100; i += 10)
    {
        f = (i * 1.8) + 32;
        cout << setw(6) << i << "\370C" << setw(15) << f << "\370F" << endl;

    }

    return 0;
}
