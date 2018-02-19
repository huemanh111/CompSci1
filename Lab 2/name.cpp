// This program will write the name, address and telephone
// number of the programmer.

// Hue Anh Huynh
// 1/23/17


#include <iostream>
using namespace std;

int main()
{

    string fName = "Hue Anh";
    string lName = "Huynh";

    string address = "Cardbaord Box #13 Corner of the Street Ave\n";
    string cityState = "Hoboland, NY";
    int zip = 10100;
    string teleNum = "012-345-6789";

    cout << "*******************************" << endl;
    cout << "Programmer: " << fName << " " << lName << endl;
    cout << "               " << address;
    cout << "               " << cityState << " " << zip << endl << endl;
    cout << "Telephone: " << teleNum << endl;
    cout << "*******************************" << endl;


	return 0;
}
