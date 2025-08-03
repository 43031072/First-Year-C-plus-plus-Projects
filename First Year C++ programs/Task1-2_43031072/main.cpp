//Kesaobaka Mafora
// 43031072
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    float math, english, science, history, total, average;

    // This will be displayed asking the user to enter name and the scores of all the subjects

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter student's score in Mathematics: ";
    cin >> math;

    cout << "Enter student's score in English: ";
    cin >> english;

    cout << "Enter student's score in Science: ";
    cin >> science;

    cout << "Enter student's score in History: ";
    cin >> history;

    total = math + english + science + history;  //Formula that will be used to calculate average
    average = total / 4.0;

    //format of the report card to be displayed
    cout << endl;
    cout << left << setw(20) << setfill(' ') << "Name" << name << endl;
    cout << left << setw(20) << setfill(' ') << "Mathematics" << fixed << setprecision(2) << math << endl;
    cout << left << setw(20) << setfill(' ') << "English" << fixed << setprecision(2) << english << endl;
    cout << left << setw(20) << setfill(' ') << "Science" << fixed << setprecision(2) << science << endl;
    cout << left << setw(20) << setfill(' ') << "History" << fixed << setprecision(2) << history << endl;
    cout << left << setw(20) << setfill(' ') << "Total Score" << fixed << setprecision(2) << total << endl;
    cout << left << setw(20) << setfill(' ') << "Average Score" << fixed << setprecision(2) << average;

    return 0;
}
