/*
Take any natural number n.
 If n is even, divide it by 2 to get n / 2.
 If n is odd, multiply it by 3 and add 1 to get 3n + 1.
 Repeat the process indefinitely.
In 1937, Lothar Collatz proposed that no matter what number you begin with,
the sequence eventually reaches 1. This is widely believed to be true, but
has never been formally proved.
Write a program that inputs a number from the user, and then displays the Collatz
Sequence starting from that number. Stop when you reach 1.
Also display the total number of steps in the sequence.
Also display the largest value encountered in the sequence.
*/

//Hue Anh Huynh
//2/21/17

#include<iostream>

using namespace std;

int main()
{
    int n = -1;
    int c = 0; //count
    int l = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << n << "   ";
    while(n != 1)
    {

//        cout << n << "   ";
        if(n % 2 == 0) //n is even
        {
            n = n / 2;

        }
        else //n is odd
        {
            n = (n * 3) + 1;
        }

        c++;
        if(n > l)
        {
            l = n;
        }
        cout << n << "   ";
    }

    cout << endl << endl << "Terminated after " << c << " steps.";
    cout << "The largest value was " << l << "." << endl;

	return 0;
}
