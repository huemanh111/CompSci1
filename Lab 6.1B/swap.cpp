/*
Write a program that will read two floating point numbers (the first
read into a variable called first and the second read into a variable called
second) and then calls the function swap with the actual parameters first
and second. The swap function having formal parameters number1 and
number2 should swap the value of the two variables. Note: This is similar
to a program you did in Lesson Set 1; however, now you are required to
use a function. You may want to look at logicprob.cpp from Lesson Set 1.
    Sample Run:
    Enter the first number
    Then hit enter
    80
    Enter the second number
    Then hit enter
    70
    You input the numbers as 80 and 70.
After swapping, the first number has the value of 70 which was the value of the second number
The second number has the value of 80 which was the value of the first number
*/

//Hue Anh Huynh
//3/12/17

#include <iostream>

using namespace std;

void swap (float& num1, float& num2);

int main(){

    float n1;
    float n2;


    cout << "First Number: ";
    cin >> n1;

    cout << "Second Number: ";
    cin >> n2;

    cout << "You input the number as " << n1 << " and " << n2 << "." << endl;

    swap (n1, n2);

    cout << "After swapping, the first number has the value of " << n1 <<
            " which was the value of the second number." << endl;
    cout << "The second number has the value of " << n2 <<
            " which was the value of the first number." << endl;

    return 0;
}

void swap(float& num1, float& num2){

    float t; //temp
    t = num1;
    num1 = num2;
    num2 = t;

}

/*
Exercise 1: Compile the program and correct it if necessary until you get no
syntax errors.
Exercise 2: Run the program with the sample data above and see if you get the
same results.

Exercise 3: The swap parameters must be passed by ____________.
(Assume that main produces the output.) Why?
    Pass by reference because the value in the actual parameter is changed.
*/

