//Minimum/Maximum
//This program compares two numbers and identifies the larger and smaller values

// Hue Anh Huynh
// 2/1/17


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter your first number: ";
    cin >> n1;
    cout << "Enter your second number: ";
    cin >> n2;

    if(n1 > n2)
    {
        cout << "Maximum: " << n1 << endl;
        cout << "Minimum: " << n2 << endl;
    }
    else if(n1 < n2)
    {
        cout << "Maximum: " << n2 << endl;
        cout << "Minimum: " << n1 << endl;
    }
    else //(n1 == n2) //this is if both are equal
    {
        cout << "Both values are equal.\n";
    }
	return 0;
}
