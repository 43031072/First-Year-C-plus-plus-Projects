#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int Months = 3;
const int Weeks = 4;

void displayCartoonStats(int arrToonViewers[Months][Weeks])
{
    cout << "\nCartoon Viewership Stats\n";
    cout << setw(10) << " " << "Week 1" << setw(10) << "Week 2" << setw(10) << "Week 3" << setw(10) << "Week 4" << endl;

    for(int j = 0; j < Months; j++)
    {
        cout << "Month " << j+1 << ":";
        for(int k = 0; k < Weeks; k++)
        {
            cout << setw(10) << arrToonViewers[j][k];
        }
        cout << endl;
    }
}

int calcToonFansOfMonth(int arrToonViewers[Months][Weeks], int month)
{
    if (month < 1 || month > Months)
    {
        cout << "Invalid month number. Please enter a value between 1 and " << Months << "." << endl;
        return -1;
    }

    int totalViewership = 0;
    cout << "\nViewership stats for Month " << month << ":\n";
    for (int z = 0; z < Weeks; z++)
    {
        cout << "Week " << z + 1 << ": " << arrToonViewers[month - 1][z] << " viewers" << endl;
        totalViewership += arrToonViewers[month - 1][z];
    }

    return totalViewership;
}

int main()
{
    int arrToonViewers[Months][Weeks];

    // Populate array with random viewership numbers between 100 and 10000
    for (int i = 0; i < Months; i++)
    {
        for (int j = 0; j < Weeks; j++)
        {
            arrToonViewers[i][j] = rand() % 9901 + 100;
        }
    }

    displayCartoonStats(arrToonViewers);

    int selectedMonth;
    do
    {
        cout << "\nEnter a month number (1-3) to see viewership stats: ";
        cin >> selectedMonth;
    } while (selectedMonth < 1 || selectedMonth > Months);

    int totalViewership = calcToonFansOfMonth(arrToonViewers, selectedMonth);
    if (totalViewership != -1)
    {
        cout << "\nTotal viewership for Month " << selectedMonth << ": " << totalViewership << " viewers" << endl;
    }

    return 0;
}
