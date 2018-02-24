// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

//Hue Anh Huynh
//3/4/17


#include <iostream>
#include <string>

using namespace std;

void writeProverb(string word);

int main()
{
	string word;

	cout << "Given the Phrase" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		 << endl;
/*
	cout << "Input a 1 if you want the sentence to be finished with party"
		 << endl;
	cout << "Input any other number for the word country" << endl;
*/
	cout << "Please input your choice of word: ";
	cin >> word;
	cout << endl;

	writeProverb(word);

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************

void writeProverb(string w)
{
/* //EXERCISE 2*****************************************************************************
	if (n == 1)
    {
        cout << "Now is the time for all good men to come to the aid of their party\n";
	}
    else if (n == 2)
    {
        cout << "Now is the time for all good men to come to the aid of their country\n";
	}
	else //if it's none of the choices
	{
        cout <<"Please input 1 or 2: ";
        cin >> n;
	}
*/
	cout << "Now is the time for all good men to come to the aid of their " << w << endl;
}

/*
Exercise 1: Some people know this proverb as “Now is the time for all good
men to come to the aid of their country” while others heard it as “Now is
the time for all good men to come to the aid of their party.” This program
will allow the user to choose which way they want it printed. Fill in the
blanks of the program to accomplish what is described in the program
comments. What happens if you inadvertently enter a float such as -3.97?
    If I enter -3.97 the program doesn't run

Exercise 2: Change the program so that an input of 1 from the user will print
“party” at the end, a 2 will print “country” and any other number will be
invalid so that the user will need to enter a new choice.

Exercise 3: Change the previous program so the user may input the word to
end the phrase. The string holding the user’s input word will be passed to the
proverb function instead of passing a number to it. Notice that this change
requires you to change the proverb function heading and the prototype as
well as the call to the function.
*/
