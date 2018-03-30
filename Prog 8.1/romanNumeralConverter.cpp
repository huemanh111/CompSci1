/*Hue Anh Huynh
  3/29/17
Write a program that displays the roman numeral equivalent of any decimal number
between 1 and 10 that the user enters. The roman numerals should be stored in an
array of strings and the decimal number that the user enters should be used to locate
the array element holding the roman numeral equivalent. The program should have a
loop that allows the user to continue entering numbers until an end sentinel of 0 is
entered.
*/

#include <iostream>
using namespace std;

string ROMAN_NUMERAL[10] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};


int main()
{
    int n;

    cout << "ROMAN NUMERAL CONVERTER" << endl;
    cout << "Enter a number from 1 to 10 too be converted: " ;
    cin >> n;

    while (n < 1 || n > 10)
    {
        cout << "The input is invalid. The number must be between 1 and 10. Please try again: ";
        cin >> n;
    }
    cout << "Roman Numeral: " << ROMAN_NUMERAL[n - 1] << endl;
    return 0;
}
