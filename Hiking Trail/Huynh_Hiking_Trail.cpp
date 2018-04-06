//Hue Anh Huynh
//5/7/17

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const int level = 13;
bool isLevelTrailSegment(int trail[level], int start, int end);
bool isDifficult(int trail[level], int start, int end);

int main()
{
    const int SIZE = 13;
    int markers[SIZE] = {100, 150, 105, 120, 90, 80, 50, 75, 75, 70, 80, 90, 100};
    bool isLevel;
    bool difficult;
    int Start = 7, End = 10;

    cout << "\nTrail between markers " << Start << "-" << End << " is ";
    isLevel = isLevelTrailSegment(markers, Start, End);
    if(isLevel)
        cout << "level" << endl;
    else
        cout << "not level" << endl;

    Start = 2;
    End = 12;
    cout << "\nTrail between markers " << Start << "-" << End << " is ";
    isLevel = isLevelTrailSegment(markers, Start, End);
    if(isLevel)
        cout << "level." << endl;
    else
        cout << "not level." << endl;

    Start=5;
    End=12;
    cout<<"\nTrail between markers "<<Start<<"-"<<End<<" is ";
    difficult=isDifficult(markers,Start,End);
    if (difficult)
        cout<<"difficult."<<endl;
    else
        cout<<"not difficult."<<endl;

    Start = 0;
    End = 12;
    cout << "\nTrail between markers " << Start << "-" << End << " is ";
    difficult = isDifficult(markers, Start, End);
    if(difficult)
        cout << "difficult." << endl;
    else
        cout << "not difficult." << endl;

    return 0;
}

bool isLevelTrailSegment(int trail[level], int start, int end)
{
    int maximum, minimum;
    maximum = trail[start];
    minimum = trail[start];
    for(int i = start; i <= end; i++)
    {
        if(trail[i] > maximum)
        {
            maximum = trail[i];
        }
        if(trail[i] < minimum)
        {
            minimum = trail[i];
        }
    }
    if(abs(maximum - minimum) > 10)
    {
        return false;
    }
    return true;
}

bool isDifficult(int trail[level], int start, int end)
{
    int totalCount = 0;

    for(int i = 0; i < level; i++)
    {
        if(abs(trail[i + 1] - trail[i]) >= 30)
        {
            totalCount++;
        }
    }
    if(totalCount < 3)
    {
        return false;
    }
    return true;
}

/*
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const int level = 13;

void showIndex(int index[level]);
void showElevation (int trail[level]);
bool isLevelTrailSegment(int trail[level] , int start, int end);
bool isDifficult(int trail[level]);


int main()
{
    //const int level = 13
    int startTrail, endTrail;
    int index[level] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int trail[level] = {100, 150, 105, 120, 90, 80, 50, 75, 75, 70, 80, 90, 100};

    cout << endl;
    cout << "                       Trail Elevation (meters)                      " << endl;
    showIndex(index);
    showElevation(trail);

    cout << "Where do you want to start? Enter the index: ";
    cin >>  startTrail;

    while(startTrail < 0 || startTrail > 12 )
    {
        cout << "Your input was not one of the index, try again" << endl;
        cin >> startTrail;
    }

    cout << "Where do you want to end? Enter the index: ";
    cin >> endTrail;

    while(endTrail < 0 || endTrail > 12)
    {
        cout << "Your input was not one of the index above, try again" << endl;
        cin >> endTrail;
    }

    if(isLevelTrailSegment(trail, startTrail, endTrail) == false)
    {
        cout << "The trail is not leveled." << endl;
    }

    else if(isLevelTrailSegment(trail, startTrail, endTrail) == true)
    {
        cout << "The trail is leveled. " << endl;
    }

    if(isDifficult(trail) == false)
    {
        cout << "The trail is not difficult, lets go hiking" << endl;
    }
    else if(isDifficult(trail) == true)
    {
        cout << "The trail is difficult, go challenge yourself" << endl;
    }

    return 0;

}
bool isLevelTrailSegment(int trail[level], int start, int end)
{
    cout << endl;
    int maximum, minimum;
    maximum = trail[start];
    minimum = trail[start];
    for(int i = start; i <= end; i++)
    {
        if(trail[i] > maximum)
        {
            maximum = trail[i];
        }
        if(trail[i] < minimum)
        {
            minimum = trail[i];
        }
    }
    if(abs(maximum - minimum) > 10)
    {
        return false;
    }
    return true;
}

bool isDifficult(int trail[level])
{
    int totalCount = 0;

    for(int i = 0; i < level; i++)
    {
        if(abs(trail[i + 1] - trail[i]) >= 30)
        {
            totalCount++;
        }
    }
    if(totalCount < 3)
    {
        return false;
    }
    return true;
}

void showElevation (int trail[level])
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Elevations  ";
    for (int i = 0; i < 13; i++)
    {
        cout << trail[i] << "|" << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

void showIndex(int index[level])
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Index          ";
    for(int i = 0; i < 13; i++)
    {
        cout << index[i] << "|" << "  ";
    }
    cout << endl;
}
*/
