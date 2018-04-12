//Hue Anh Huynh
//5/4/17

#include <iostream>
#include <vector>

using namespace std;

struct SparseArrayEntry
{
    int r; //row
    int c; //col
    int v; //value
};

vector<SparseArrayEntry> SparseArray;

void SparseArrayEntry(int row,int col,int val);
void showEntries();
int getValueAt(int row,int col);
void removeColumn(int col);

int main()
{

    SparseArrayEntry(1, 4, 4);
    SparseArrayEntry(2, 0, 1);
    SparseArrayEntry(3, 1, -9);
    SparseArrayEntry(1, 1, 5);

    showEntries();

    cout << endl;

    cout << "getValueAt(3, 1): " << getValueAt(3, 1) << endl;
    cout << "getValueAt(3, 3): " << getValueAt(3, 3) << endl;

    cout << endl <<"removeColumn(1)" << endl;
    removeColumn(1);
    showEntries();

    return 0;
}

void SparseArrayEntry(int row, int col, int val)
{
    struct SparseArrayEntry entry;
    entry.r = row;
    entry.c = col;
    entry.v = val;
    SparseArray.push_back(entry);
}

void showEntries()
{
    for (int i = 0; i < SparseArray.size(); i++)
    {
        cout << "row: " << SparseArray[i].r
            << " col: " << SparseArray[i].c
         << "  value: " << SparseArray[i].v << endl;
    }
}

int getValueAt(int row,int col)
{
    int lastNumRow = 0;
    int lastNumCol = 0;
    int val = 0;

    for (int i = 0; i < SparseArray.size(); i++)
    {
        if (SparseArray[i].r > lastNumRow)
        {
            lastNumRow = SparseArray[i].r;
        }
        if (SparseArray[i].c > lastNumCol)
        {
            lastNumCol = SparseArray[i].c;
        }
    }

    for (int i = 0; i < lastNumRow; i++)
    {
        if (row == SparseArray[i].r && col == SparseArray[i].c)
        {
            val = SparseArray[i].v;
        }
    }

    return val;
}

void removeColumn(int col)
{
    for (int i = 0; i < SparseArray.size(); i++)
    {
        if (SparseArray[i].c == col)
        {
            SparseArray.erase(SparseArray.begin() + i);
            i = 0;
        }
    }

    for (int i = 0; i < SparseArray.size(); i++)
    {
        if (SparseArray[i].c > 0)
        {
            SparseArray[i].c = SparseArray[i].c - 1;
        }
    }
}
