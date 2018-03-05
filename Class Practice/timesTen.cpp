//Hue Anh Huynh
//3/1/17


#include <iostream>


using namespace std;

void timesTen(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    timesTen(n);

    return 0;
}

void timesTen(int n)
{
    n = n * 10;
    cout << n << endl;


}
