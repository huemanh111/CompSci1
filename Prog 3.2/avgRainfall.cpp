//This program calculates the average monthly rainfall for three months


// Hue Anh Huynh
// 2/1/17


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string  m1, m2, m3;
    float r1, r2, r3;
    float avg;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please enter the first month and the amount of rain: ";
	cin >> m1;
    cin >> r1;
	cout << "Please enter the second month and the amount of rain: ";
	cin >> m2;
	cin >> r2;
	cout << "Please enter the third month and the amount of rain: ";
	cin >> m3;
	cin >> r3;

	avg = (r1 + r2 + r3) / 3;

	cout << "The average monthly rainfall for " << m1 << ", " << m2 << ", and " << m3 << " was " << avg << " inches."<< endl;

	return 0;
}
