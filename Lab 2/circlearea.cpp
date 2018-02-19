// This program will output the circumference and area
// of the circle with a given RADius.

// Hue Anh Huynh
// 1/23/17

/*
Exercise 3: Change the data type of circumference from float to int. Run the
program and record the results.
The circumference of the circle is 33 units
The area of the circle is 91.5624 units^2
The circumference changed to 33 units because the variable type came an integer
which is a data type that doesn't support decimals. Also the area remained unchanged
because it's a double type.
*/

/*
Exercise 1: Using Lab 2.2 as an example, develop a program that will determine
the area and perimeter of a rectangle. The length and width can be
given as constants. (LENGTH=8 WIDTH=3)
Exercise 2: Compile and run your program. Continue to work on it until you
get the following output.
The area of the rectangle is 24
The perimeter of the rectangle is 22
*/

#include <iostream>
using namespace std;

//circle
const double PI = 3.14;
const double RAD = 5.4;
//rectangle
const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
	double area;
	float circumference;
	circumference = 2 * PI * RAD;
	area = PI * (RAD * RAD);

	cout << "The circumference of the circle is " << circumference << " units" << endl;
    cout << "The area of the circle is " << area << " units^2" << endl;

    cout << "------------------------------------------------" << endl; //Lab 2.3 starts here

    int areaRect;
    int perimeter;
    areaRect = LENGTH * WIDTH;
    perimeter = (LENGTH * 2) + (WIDTH * 2);

    cout << "The area of the rectangle is " << areaRect << " units^2" << endl;
    cout << "The perimeter of the rectangle is " << perimeter << " units" << endl;


	return 0;
}
