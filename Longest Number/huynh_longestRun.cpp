//Hue Anh Huynh
//4/10/11

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

void toss(int arr[], int& t);
void longestRun(int arr[], int t);

int main()
{
	const int SIZE = 20;
	int arr[SIZE];
	int t;

	cout << "Number of Tosses: ";
	cin >> t;
	while(t < 0)
	{
		cout << "Number of Tosses: ";
		cin >> t;
	}

	toss(arr, t);
	longestRun (arr, t);

	return 0;
}


void toss(int arr[], int& t)
{
	srand(time(0));
	for (int i = 0; i < t; i++)
	{
    	arr[i] = (rand()%6 + 1);
    	cout << arr[i] << "    ";
	}
	cout << endl;
}

void longestRun (int arr[], int t)
{
    int maxx = -1; //maximum
    int c = 0; //count
    int maxxIndex = -1; //position of max run in array

    for (int i = 0; i < t - 1; i++)
    {
            if (c >= maxx)
            {
                maxx = c;
                maxxIndex = i + 1 - c;
            }
            if (arr[i] == arr[i + 1])
            {
                c++;
            }

            else
                c = 1;
        }
	cout << "Longest Run at Index: " << maxxIndex << endl;
}
