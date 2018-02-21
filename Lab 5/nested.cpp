// This program finds the average time spent programming by a student
// each day over a three day period.

// Hue Anh Huynh
// 2/15/17

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, numHours2, total, total2, average, average2;
	int student, day = 0;	// these are the counters for the loops
	int n;

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there: ";
	cin >> numStudents;
	cout << "How many days are there: ";
    cin >> n;
    cout << endl << endl;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		total2 = 0;

		for (day = 1; day <= n; day++)
		{

			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " for programming." << endl;
            cin >> numHours;
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " for biology." << endl;
			cin >> numHours2;

			total = total + numHours;
			total2 = total2 + numHours2;
		}

		average = total/n;
		average2 = total2/n;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average << endl;
        cout << "The average number of hours per day spent on biology by "
			 << "student " << student << " is " << average2
			 << endl;

        if (average > average2)
        {
            cout << "Student " << student << " spent more hours on programming" << endl << endl << endl;
        }
        else if (average < average2)
        {
            cout << "Student " << student << " spent more hours on biology" << endl << endl << endl;
        }
        else if (average = average2)
        {
            cout << "Student " << student << " spent an equal amount of hours in both subjects" << endl << endl;
        }
	}

	return 0;
}

/*
Exercise 1: Note that the inner loop of this program is always executed exactly
three times—once for each day of the long weekend. Modify the code so
that the inner loop iterates n times, where n is a positive integer input by
the user. In other words, let the user decide how many days to consider
just as they choose how many students to consider.

Exercise 2: Modify the program from Exercise 1 so that it also finds the average
number of hours per day that a given student studies biology as well as
programming. For each given student include two prompts, one for each
subject. Have the program print out which subject the student, on average,
spent the most time on.

*/
