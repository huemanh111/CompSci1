/*Hue Anh Huynh
  4/5/17
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>


using namespace std;

void printMenu();
int userChoice();
int initialize(int arr[], int arrSIZE);
void display(int arr[], int s);
void minMaxSumAvg(int arr[], int uSize, int& maxx, int& minn, double& sum, double& avg);
void findVal(int arr[], int uSize);
int removeVal(int arr[], int uSize);
int insertVal(int arr[], int uSize);


int main()
{
    int choice = 0; //user's choice
    int uSize; //size of user's array
    int maxx, minn;
    double sum, avg;

    const int SIZE = 10;
    int arr[SIZE];

    printMenu();
    uSize = initialize(arr, SIZE);

    do
    {
        printMenu();
        choice = userChoice();

        if(choice == 1)
        {
            uSize = initialize(arr, SIZE);
        }
        else if(choice == 2)
        {
            display(arr, uSize);
        }
        else if(choice == 3)
        {
            minMaxSumAvg(arr, uSize, maxx, minn, sum, avg);
        }
        else if(choice == 4)
        {
            findVal(arr, uSize);
        }
        else if(choice == 5)
        {
            uSize = removeVal(arr, uSize);
        }
        else if(choice == 6)
        {
            uSize = insertVal(arr, uSize);
        }
    }while(choice != 7);

    return 0;
}


void printMenu()
{
    cout <<
    "\nMENU\n" <<
    "1. Initialize Array\n" <<
    "2. Display Array\n" <<
    "3. Show min, max, sum and average\n" <<
    "4. Search\n" <<
    "5. Remove an element at specific index\n" <<
    "6. Add an element at a specific index\n" <<
    "7. Exit\n";
}

int userChoice()
{
    int n;
    do
    {
        cout << "Enter your selection: ";
        cin >> n;
    }while(n < 1 || n > 7);

    return n;
}

int initialize(int arr[], int maxSize)
{
    int n = 0;
    int c = 0;

    do
    {
        cout << "Enter a number for the array: ";
        cin >> n;
        arr[c] = n;
        c++;
    }while(n >= 0 && c < maxSize);

    return c - 1; //thats how many values the user entered in the array
}

void display(int arr[], int s)
{
    cout << "Array: ";
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
}

void minMaxSumAvg(int arr[], int uSize, int& maxx, int& minn, double& sum, double& avg)
{
    minn = arr[0];
    maxx = arr[0];
    sum = 0;
    avg = 0;

    for(int i = 0; i < uSize; i++)
    {
        if(arr[i] < minn)
        {
            minn = arr[i];
        }
    }
    for (int n = 0; n < uSize; n++)
    {
        if(arr[n] > maxx)
        {
            maxx = arr[n];
        }
    }
    for (int x = 0; x < uSize; x++)
    {
        sum += arr[x];
    }
    avg = sum/uSize;

    cout << "Number of integers: " << uSize << endl;
    cout << "Minimum integer: " << minn << endl;
    cout << "Maximum integer: " << maxx << endl;
    cout << "Sum of integers: " << sum << endl;
    cout << "Average of integers: " << static_cast<double>(avg) << endl;
}

void findVal(int arr[], int uSize)
{
    int n;
    int c = 0;

    cout << "Enter number to be counted in appearance: ";
    cin >> n;

    for(int i = 0; i < uSize; i++)
    {
        if(arr[i] == n)
        {
            c++;
        }
    }
    cout << "The number " << n << " showed up " << c << " times in the array" << endl;
}

int removeVal(int arr[], int uSize) //to see the removed element in array use display()
{
    int index; //n is num user wants to remove

    cout << "Enter the index you wish to remove: ";
    cin >> index;
    while(index > uSize)
    {
        cout << "The value is out of range" << endl;
        cout << "Enter the index you wish to remove: ";
        cin >> index;
    }
    for(int i = index ; i < uSize - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    display(arr, uSize - 1);
    return uSize - 1;
}

int insertVal(int arr[], int uSize)
{
    int index, num; //n is num user wants to insert

//    if(uSize < 10) //there is room for the array
//    {
        cout << "Enter the index you wish to insert a value in: ";
        cin >> index;
        while(index > uSize)
        {
            cout << "The value is out of range" << endl;
            cout << "Enter the index you wish to insert a value in: ";
            cin >> index;
        }
        cout << "Please enter the number you wish to have inserted: ";
        cin >> num;
        for(int i = uSize; i > index; i--)
        {
            arr[i] = arr[i - 1];

        }
        arr[index] = num;
        display(arr, uSize + 1);
        return uSize + 1;
//    }
//    else
//    {
//        cout << "Array has reached it's maximum size" << endl;
//        return 0;
//    }

}

