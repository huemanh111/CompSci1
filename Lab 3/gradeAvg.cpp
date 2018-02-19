/*Lab 3.5  Option 1
Write a program that will read in 3 grades from the keyboard and
will print the average (to 2 decimal places) of those grades to the screen. It
should include good prompts and labeled output. Use the examples from
the earlier labs to help you. You will want to begin with a design. The
Lesson Set 1 Pre-lab Reading Assignment gave an introduction for a design
similar to this problem. Notice in the sample run that the answer is stored
in fixed point notation with two decimal points of precision.
*/

// Hue Anh Huynh
// 1/30/17


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float g1, g2, g3; //grades
	float avg;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the first grade: ";
	cin >> g1;
    cout << "Please input the second grade: ";
	cin >> g2;
    cout << "Please input the third grade: ";
    cin >> g3;

    avg = (g1 + g2 + g3)/3;

    cout << "The average of the three grades is " << avg << endl;

	return 0;
}
