/*
Write a program that can be used as a math tutor for a young student.
The program should display two random numbers between 10 and 50 that
are to be added, such as:

  24
+ 12
————
The program should then wait for the student to enter the answer. If
the answer is correct, a message of congratulations should be printed.
If the answer is incorrect, a message should be printed showing the correct answer.

The way the two numbers are displayed should match the above example.
*/

// Hue Anh Huynh
// 2/8/17

#import<iostream>
#import<cstdlib>
#import<ctime>

using namespace std;

int main()
{

    int a; //user's answer
    int n1, n2;
    int sum;

    unsigned seed = time(0);
    srand(seed);

    cout << "Hello! I am your math tutor.\n";
    cout << "Please enter your answer below.\n" << endl;

    n1 = rand() % (51 - 10) + 10;
    n2 = rand() % (51 - 10) + 10;
    sum = n1 + n2;

    cout << "    " << n1 << endl;
    cout << "  + " << n2 << endl;
    cout << "  _____" << endl;
    cout << "    ";
    cin >> a;
    if(a == sum)
    {
        cout << "CORRECT! " << n1 << " + " << n2 << " = " << sum << endl;
    }
    else
    {
        cout << "Incorrect. The answer is " << sum << endl;
    }
    return 0;
}
