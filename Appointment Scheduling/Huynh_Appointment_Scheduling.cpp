//Hue Anh Huynh
//May 1, 2017

#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;


struct timeInterval
{
    int start;
    int end;
};

struct Appointment
{
    timeInterval time;
    bool emergency;
    bool scheduled; //necessary for clearConflict
};

bool overlapsWith(timeInterval current, timeInterval other);
bool conflictsWith(Appointment current, Appointment other);
bool clearConflicts(vector<Appointment> apptList, Appointment appt);
bool addAppointment(vector<Appointment> apptList, Appointment appt);

const char* bool_cast(const bool b)
{
    return b ? "true" : "false";
}

int main()
{
    vector<Appointment> dailySchedule;

    timeInterval t1 = {2, 5};
    timeInterval t2 = {6, 8};
    timeInterval t3 = {10, 12};
    timeInterval t4 = {7, 9};
    timeInterval t5 = {3, 4};

    Appointment a1 = {t1, false, true};
    Appointment a2 = {t2, false, true};
    Appointment a3 = {t3, false, true};
    Appointment b1 = {t4, false, true};
    Appointment b2 = {t5, true, true};

    dailySchedule.push_back(a1);
    dailySchedule.push_back(a2);
    dailySchedule.push_back(a3);
    dailySchedule.push_back(b1);
    dailySchedule.push_back(b2);

    cout << "Appointment\t" << "Starts\t" << "Ends\t" << "Emergency?" << endl;
    cout << setw(5) << "a1" << setw(13) << a1.time.start << setw(9) << a1.time.end << setw(11) << bool_cast(a1.emergency) << endl;
    cout << setw(5) << "a2" << setw(13) << a2.time.start << setw(9) << a2.time.end << setw(11) << bool_cast(a2.emergency) << endl;
    cout << setw(5) << "a3" << setw(13) << a3.time.start << setw(9) << a3.time.end << setw(11) << bool_cast(a3.emergency) << endl;
    cout << setw(5) << "b1" << setw(13) << b1.time.start << setw(9) << b1.time.end << setw(11) << bool_cast(b1.emergency) << endl;
    cout << setw(5) << "b2" << setw(13) << b2.time.start << setw(9) << b2.time.end << setw(11) << bool_cast(b2.emergency) << endl;

    cout << " add a1 returns " << bool_cast(addAppointment(dailySchedule, a1)) << endl; //1 true
    cout << " add a2 returns " << bool_cast(addAppointment(dailySchedule, a2)) << endl; //1 true
    cout << " add a3 returns " << bool_cast(addAppointment(dailySchedule, a3)) << endl; //1 true
    cout << " add b1 returns " << bool_cast(addAppointment(dailySchedule, b1)) << endl; //0 false
    cout << " add b2 returns " << bool_cast(addAppointment(dailySchedule, b2)) << endl; //1 true

    return 0;
}


bool overlapsWith(timeInterval current, timeInterval other)
{
    if(current.end <= other.start || current.start >= other.end) //does not overlap
    {
        return false;
    }
    else //overlaps
    {
        return true;
    }
}

bool conflictsWith(Appointment current, Appointment other)
{
    return overlapsWith(current.time, other.time);
}

bool clearConflicts(vector<Appointment> apptList, Appointment appt)
{
     int i = 0;

     while(i < apptList.size())
     {
         if(conflictsWith(apptList.at(i), appt) == true)
         {
            apptList.erase(apptList.begin() + i);
            return false;
         }
         else
         {
            i++;
         }
    }
    return true;
}

bool addAppointment(vector<Appointment> apptList, Appointment appt)
{
    return clearConflicts(apptList, appt);
}


