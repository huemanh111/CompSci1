/*Lowest Score Drop
• Write a program that calculates the average of a group of test scores, where the lowest
score in the group is dropped. It should use the following functions:
• void getScore() should ask the user for a test score, store it in a reference parameter
variable, and validate it. This function should be called by main once for each of
the five scores to be entered.
• void calcAverage() should calculate and display the average of the four highest
scores. This function should be called just once by main, and should be passed the
five scores.
• int findLowest() should find and return the lowest of the five scores passed to it.
It should be called by calcAverage, which uses the function to determine one of the
five scores to drop.
Input Validation: Do not accept test scores lower than 0 or higher than 100.
*/

//Hue Anh Huynh
//3/8/17

#include<iostream>

using namespace std;

void getScore(int &score);
void calcAvg(int s1, int s2, int s3, int s4, int s5);
int findLowest(int s1, int s2, int s3, int s4, int s5);

int s1;
int s2;
int s3;
int s4;
int s5;

int main()
{

    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);

    calcAvg(s1, s2, s3, s4, s5);

	return 0;
}

void getScore(int &s)
{
//    cout << "Enter a score(1 to 100): " << endl;
    s = -1;
    while(s < 0 || s > 100)
    {
        cout << "Enter a score(1 to 100): ";
        cin >> s;
    }

}

void calcAvg(int s1, int s2, int s3, int s4, int s5)
{
    double avg;

    avg = ((s1 + s2 + s3 + s4 +s5) - findLowest(s1, s2, s3, s4, s5)) / 4.0;
    cout << "Average: " << avg << endl;

}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
    int low = s1;

    if(low > s2)
    {
        low = s2;
    }
    if(low > s3)
    {
        low = s3;
    }
    if(low > s4)
    {
        low = s4;
    }
    if(low > s5)
    {
        low = s5;
    }

    return low;
}



