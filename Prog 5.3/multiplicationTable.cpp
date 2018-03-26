/*
Use nested for loops to generate a multiplication table,
which should go all the way up to 10x10.Output should look like
the table shown below
*/

//Hue Anh Huynh
//2/21/17

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << "x  |   1   2   3   4   5   6   7   8   9   10" << endl;
    cout << "===+==========================================" << endl;

    for(int h = 1; h <= 10; h++)
    {
        cout << h << setw(3) << "|";
        for(int g = 1; g <= 10; g++)
        {
            cout << setw(4) << (h*g);

        }
        cout << endl;
    }


	return 0;
}
