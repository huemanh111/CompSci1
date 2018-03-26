/*
Write a program to allow the user to enter three integers. These integers need to be in
ascending (increasing) order, though duplicate numbers are allowed.
The first two numbers are the measure of the sides and the third is the hypotenuse.
Print whether the three sides make a right triangle or not.
*/

//Hue Anh Huynh
//2/21/17

#include<iostream>

using namespace std;

int main()
{
     int a, b, c;


     cout << "Enter three integers in ascending order" << endl;
     cout << "The program will prompt you to enter the values of each side"
          << " if you do not enter them in ascending order." << endl;
     do
     {
         cout << "Enter side 1: ";
         cin >> a;
         cout << "Enter side 2: ";
         cin >> b;
         cout << "Enter side 3: "; //hyp
         cin >> c;
         cout << endl;
     }  while(!(a <= b && b <= c));
     if(((a * a) + (b * b)) == (c * c))
     {
         cout << "It is a right triangle!" << endl;
     }
     else
     {
         cout << "It is not a right triangle!" << endl;
     }



	return 0;
}
