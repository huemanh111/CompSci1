//Roman Numeral Converter
//This program converts numbers into Roman numerals

// Hue Anh Huynh
// 2/1/17


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n; //int that is from 1 to 10
    string rN; //roman numeral

    cout << "Number: ";
    cin >> n;

    if(n == 1)
    {
        rN = "I";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 2)
    {
        rN = "II";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 3)
    {
        rN = "III";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 4)
    {
        rN = "IV";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 5)
    {
        rN = "V";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 6)
    {
        rN = "VI";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 7)
    {
        rN = "VII";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 8)
    {
        rN = "VIII";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 9)
    {
        rN = "IX";
        cout << "Roman Numeral: " << rN << endl;
    }
    else if(n == 10)
    {
        rN = "X";
        cout << "Roman Numeral: " << rN << endl;
    }
    else
    {
        cout << "Not a valid entry.\n";
        return 0;
    }


}
