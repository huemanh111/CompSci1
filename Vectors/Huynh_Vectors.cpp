//Hue Anh Huynh
//4/26/17

#include<vector>
#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void printMenu();
int userChoice();
void fillVector(vector<int> &value);
void clearVector(vector<int> &value);
void printVector(vector<int> &value);
void reverseVector(vector<int> &value);
int find(vector<int> values, int choiceNum);
void removeIndex(vector<int> &values, int index);
void removeValue(vector<int> &values, int choiceNum);

int main()
{
    int choice;
    int removeNum;
    vector<int> num;
    vector<int> valueCopy;
    do
    {
        printMenu();
        choice = userChoice();

        if(choice == 1)
        {
            fillVector(num);
        }
        else if(choice == 2)
        {
            clearVector(num);
        }
        else if(choice == 3)
        {
            printVector(num);
        }
        else if(choice == 4)
        {
            reverseVector(num);
        }
        else if(choice == 5)
        {
            cout << "Value to remove: " ;
            cin >> removeNum;
            removeValue(num, removeNum);
        }
        cout << endl;
    }while(choice != 6);

    return 0;
}


void printMenu()
{
    cout << "MENU (Please enter 1-6)" << endl <<
    "1. fillVector" << endl <<
    "2. clearVector" << endl <<
    "3. printVector" << endl <<
    "4. printVectorInReverse" << endl <<
    "5. removeValue" << endl <<
    "6. quit" << endl;
}

int userChoice()
{
    int n;
    do
    {
        cout << "Enter your selection: ";
        cin >> n;
    }while(n < 1 || n > 6);

    return n;
}

void fillVector(vector<int> &value)
{
    int numbers;
    cout << "Enter the list of positive values(eter negative number to stop): " << endl;
    do{
        cin >> numbers;
        if(numbers >= 0)
        {
            value.push_back(numbers);
        }
    }while(numbers >= 0);
}

void clearVector(vector<int> &value)
{
    if(value.size() == 0)
    {
        cout << "The current vector is empty" << endl;
    }
    cout << "The vector has been cleared" << endl;
    while (value.size() > 0)
    {
        value.pop_back();
    }
}

void printVector (vector<int> &value)
{
    cout << "CURRENT ELEMENTS" << endl;
    if(value.size() == 0)
    {
        cout << "{ }" << endl;
    }
    for (int i = 0; i <= value.size() - 1; i++)
    {
        cout << value.at(i) << " ";
    }
    cout << endl;
}

void reverseVector (vector<int> &value)
{
    vector<int> vector2;

    cout << "REVERSED ELEMENTS" << endl;

    for(int i = value.size() -1; i >= 0; i--)
    {
        vector2.push_back(value[i]);
    }
    value.clear();
    for(int j = 0; j < vector2.size(); j++)
    {
        value.push_back(vector2[j]);
    }
    for(int n = 0; n < value.size(); n++)
    {
        cout << value.at(n) << " ";
    }
    cout << endl;
}

void removeValue (vector<int> &value, int choiceNum)
{
    vector<int> index;
    for (int i = 0; i < value.size(); i++)
    {
        if (value.at(i) == choiceNum)
        {
            index.push_back(i);
        }

    }
    for (int i = 0; i < index.size(); i++)
    {
        cout << choiceNum << " found at index " << index.at(i) << " removed" << endl;
    }
    if (find(value, choiceNum) == -1)
    {
        cout << choiceNum << " not found" << endl;
    }

    while (find(value, choiceNum) != -1)
    {
        int valIndex = find(value, choiceNum);
        removeIndex(value, valIndex);
    }

}

int find(vector<int> value, int choiceNum)
{
    for (int i = 0; i < value.size(); i++)
    {
        if (value.at(i) == choiceNum)
        {
            return i;
        }
    }
    return -1;
}

void removeIndex (vector<int> &value, int index)
{
    for (int i = index; i < value.size() - 1; i++)
    {
        value.at(i) = value.at(i+1);
        value.pop_back();
    }
}

