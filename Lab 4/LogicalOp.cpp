// This program illustrates the use of logical operators

// Hue Anh Huynh
// 2/6/17

#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you? " << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior): ";
	cin >> year;

	cout << "Now enter your GPA: ";
	cin >> gpa;
	cout << endl;

	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon" << endl;

	else if (year != '4' || gpa <2.0)
		cout << "You need more schooling" << endl;

	return 0;
}

/*
Exercise 1: How could you rewrite gpa >= 2.0 in the first if statement using
the NOT operator?
    You can use the NOT operator by writing gpa != 1.9 and all other possible
    floating values between 1.9 to 0.0 but that would be too tedious so it's
    best to keep the >= operator.

Exercise 2: Could you replace year !='4' in the else if statement with
year < 4 or year <= 3? Why or why not?
Exercise 3: If you replace
    if ( gpa >= 2.0 && year == '4')
with
    if ( gpa >= 2.0 || year == '4')
and replace
    else if ( year != '4'|| gpa < 2.0)
with
    else if ( year != '4' && gpa < 2.0)
which students will graduate and which will not graduate according to this
new program?
Does this handle all cases (i.e., all combinations of year and gpa)?
    If you replaced if ( gpa >= 2.0 && year == '4') with
    if ( gpa >= 2.0 || year == '4'), any student who has a gpa of 2.0 or
    greater along with any student who's a senior would be told that
    it is time for them to graduate soon. In other words, by changing the
    and to or, the student would only have to meet one of the 2 statements
    in order to be told they will graduate soon.
    If you replaced else if ( year != '4'|| gpa < 2.0) with
    else if ( year != '4' && gpa < 2.0), only students who are not seniors
    and whose gpa is less than 2.0 would be told they need to continue schooling.

Exercise 4: Could you replace else if ( year != '4'|| gpa < 2.0) with the
single word else?
    Yes, if you used else that would mean that everyone who is not a senior student
    with a gpa of at least 2.0 needs schooling. Those who have good grades but are
    not seniors have more school to complete, while seniors who don't have a passing
    gpa have to complete more schooling.
*/
