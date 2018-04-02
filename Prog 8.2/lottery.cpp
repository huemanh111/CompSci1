/*Hue Anh Huynh
  4/3/17
Write a program that simulates a lottery. The program should have an array of 5 integers
named winningDigits, with a randomly generated number in the range of 0 through 9
for each element in the array. The program should ask the user to enter 5 digits and
should store them in a second integer array named player. The program must compare
the corresponding elements in the two arrays and count how many digits match. For
example, the following shows the winningDigits array and the Player array with sample
numbers stored in each. There are two matching digits, elements 2 and 4.

Once the user has entered a set of numbers, the program should display the winning
digits and the player’s digits and tell how many digits matched.
*/

#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{

    const int total = 5; //total digits
    int winning[total]; //winning digits
    int player[total]; //player's digits
    int playerNum;
    int c = 0; //count
    unsigned seed;
    srand(time(0));

    cout << "Enter 5 numbers (0 to 9)" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >>  playerNum;
        while(playerNum < 0 || playerNum > 9)
        {
            cout << "Invalid input" << endl;
            cout << "Enter a number: ";
            cin >> playerNum;
        }
        player[i] = playerNum;
    }

    for(int i = 0; i < 5; i++)
    {
        winning[i] = 1 + rand() % 9;

    }

    cout << "Winning Numbers: ";
    for(int w = 0; w < 5; w++)
    {
        cout << winning[w] << " ";
    }

    cout << endl;

    cout << "Your Numbers:    ";
    for(int p = 0; p < 5; p++)
    {
        cout << player[p] << " ";
    }

    cout << endl;

    for(int m = 0; m < 5; m++)
    {
        if(player[m] == winning[m])
        {
                c++;
        }
    }

    cout << "Matching Elements: " << c << endl;

    return 0;
}
