/*Hue Anh Huynh
  3/29/17

Write a modular program that accepts at least 10 integer test scores
from the user and stores them in an array. Then main should display
how many perfect scores were entered (i.e., scores of 100).
*/

#include <iostream>

using namespace std;

const int TEST_SCORES = 10;
int scores[TEST_SCORES];

int main()
{

    int c = 0; //count of perfect scores
    int test = 0;
    int score;

    cout << "Perfect Score Counter" << endl << endl;
    cout << "Enter 10 test scores from 1 - 100: ";


    for(int i = 0; i < TEST_SCORES; i++)
    {
        cin >> score;
        while(score < 0 || score > 100)
        {
            cout << "Invalid input" << endl;
            cin >> score;
        }
        scores[i] =  score;
    }

    for(int test = 0; test < TEST_SCORES ; test++)
    {
        if(scores[test] == 100)
        {
            c++;
        }
    }
    cout << "Perfect Scores: " << c << endl;

    return 0;
}

