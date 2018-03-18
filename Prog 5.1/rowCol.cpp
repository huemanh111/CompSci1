#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int r, c;
    cout << "Rows: ";
    cin >> r;
    cout << "Columns: ";
    cin >> c;

    for(int h = 0; h < r; h++)
    {
        for(int g = 0; g < c; g++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

