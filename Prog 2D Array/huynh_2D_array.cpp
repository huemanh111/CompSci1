//Hue Anh Huynh
//4/12/11

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<cstdlib>
#include<time.h>

using namespace std;

const int R = 3; //row
const int C = 4; //column

bool menu(bool initialized, int arr[R][C]);
void initialize(int arr[R][C]);
void display(bool initialized, int arr[R][C]);
int findRowSum(int arr[R][C]);
int findRowSum(int arr[R][C], int i);
int findColSum(int arr[R][C]);
int findColSum(int arr[R][C], int i);
int findTotalSum(int arr[R][C]);
int rowLargestSum (int arr[R][C]);
int colLargestSum (int arr[R][C]);


int main()
{
    bool initialized = false;
    int arr[R][C];
    menu(initialized, arr);

    return 0;
}


bool menu(bool initialized, int arr[R][C])
{
    display(initialized, arr);

    int n;
    cout << "1. Create 2d array" << endl;
    cout << "2. Find row sum" << endl;
    cout << "3. Find col sum" << endl;
    cout << "4. Find total sum" << endl;
    cout << "5. Find row with the largest sum" << endl;
    cout << "6. Find col with largest sum" << endl;
    cout << "7. Quit" << endl << endl;
    cout << "Please select 1-7: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 7)
            cout << "Invalid input" << endl;
    }
    while (n < 1 || n > 7);

    if (!initialized && (n == 2 || n == 3 || n == 4 || n == 5 || n == 6))
        cout << "Not initialized" << endl;
    else
    {
        if(n == 1)
        {
            initialize(arr);
            initialized = true;
        }
        else if(n == 2)
        {
            findRowSum(arr);
        }
        else if(n == 3)
        {
            findColSum(arr);
        }
        else if(n == 4)
        {
            findTotalSum(arr);
        }
        else if(n == 5)
        {
            rowLargestSum(arr);
        }
        else if(n == 6)
        {
            colLargestSum(arr);
        }
        else
        {
            return false;
        }
    }
    menu(initialized, arr);
    return true;
}

void initialize(int arr[R][C])
{
    srand(time(0));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = (rand() % 10) + 1;
        }
    }
}

void display(bool initialized, int arr[R][C])
{
    if(!initialized)
    {
        cout << endl;
    }
    else
    {
        for (int i = 0; i < R; i++)
        {
            cout << "[";
            for (int j = 0; j < C - 1; j++)
            {
                cout << arr[i][j] << ", ";
            }
            cout << arr[i][C - 1] << "]" << endl;
        }
    }
}

int findRowSum(int arr[R][C])
{
    int i, sum = 0;

    cout << "Enter row index: ";
    do
    {
        cin >> i;
        if (i >= R || i < 0)
        {
            cout << "Invalid index" << endl;
        }
    }
    while (i >= R || i < 0);
    for (int n = 0; n < C; n++)
    {
        sum += arr[i][n];
    }

    cout << "SUM OF ROW " << i << ": " << sum << endl << endl;
    return sum;
}

int findRowSum(int arr[R][C], int i)
{
    int sum = 0;
    for (int n = 0; n < C; n++)
    {
        sum += arr[i][n];
    }

    return sum;
}

int findColSum (int arr[R][C])
{
    int i, sum = 0;
    cout << "Enter column index: ";
    do
    {
        cin >> i;
        if (i >= C || i < 0)
        {
            cout << "Invalid index" << endl;
        }
    }
    while (i >= C || i < 0);

    for (int n = 0; n < R; n++)
    {
        sum += arr[n][i];
    }

    cout << "SUM OF COLUMN " << i << ": " << sum << endl << endl;
    return sum;
}

int findColSum(int arr[R][C], int i)
{
    int sum = 0;
    for (int n = 0; n < R; n++)
    {
        sum += arr[n][i];
    }

    return sum;
}

int findTotalSum(int arr[R][C])
{
    int sum = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "TOTAL SUM: " << sum << endl << endl;
    return sum;
}

int rowLargestSum (int arr[R][C])
{
    int sumIndex = 0;
    int sum = findRowSum(arr, 0);
    for (int i = 1; i < R; i++)
    {
        if (findRowSum(arr, i) > sum)
        {
            sum = findRowSum(arr, i);
            sumIndex = i;
        }
    }
    cout << "Row " << sumIndex << " has the largest sum of " << sum << endl << endl;
    return sumIndex;
}

int colLargestSum (int arr[R][C])
{
    int sumIndex = 0;
    int sum = findColSum(arr, 0);
    for (int i = 1; i < C; i++)
    {
        if (findColSum(arr, i) > sum)
        {
            sum = findColSum(arr, i);
            sumIndex = i;
        }
    }
    cout << "Column " << sumIndex << " has the largest sum of " << sum << endl << endl;
    return sumIndex;
}
