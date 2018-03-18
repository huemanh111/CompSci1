/*
Random Number Guessing Game

Write a program that generates a random number between 1 and 100 and asks the user
to guess what the number is. If the user’s guess is higher than the random number, the
program should display "Too high. Try again." If the user’s guess is lower than the
random number, the program should display "Too low. Try again." The program
should use a loop that repeats until the user correctly guesses the random number.
Then the program should display "Congratulations. You figured out my number."
Enhance the program that you wrote for Programming Challenge 10 so it keeps a count
of the number of guesses the user makes. When the user correctly guesses the random
number, the program should display the number of guesses along with the message of
congratulations.
*/
//Hue Anh Huynh
//2-13-17

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));
    int rand_num = (rand() % 100) + 1;
    int guess = 0;

    cout << "A random number between 1 and 100 has been chosen.\n";
    while(guess != rand_num)
    {
        cout << "Please enter a guess: ";
        cin >> guess;

        if(guess > rand_num)
        {
            cout << "Your guess is too large. Try again!" << endl << endl;
        }
        else if(guess < rand_num)
        {
            cout << "Your guess is too small. Try again!" << endl << endl;
        }
    }

    cout << "CONGRATS YOU GUESSED RIGHT!!!" << "\n";

    return 0;
}

