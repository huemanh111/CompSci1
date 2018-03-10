//Hue Anh Huynh
//1/25/17
//Ch. 3 Exercises

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int capacity; //# of gallons of gas car can hold
    int miles; //# of miles that can be driven from a full tank
    double mileage;

    cout << "This programs outputs mileage of a car.\n";
    cout << "Input the gallons of gas your car can hold:  ";
    cin >> capacity;
    cout << "Input the number of miles your car can run on with a full tank:  ";
    cin >> miles;
    mileage = miles/static_cast<double>(capacity);
    cout << "Your car's gas mileage is " << mileage << " mi/gal" << endl;

    return 0;
}
