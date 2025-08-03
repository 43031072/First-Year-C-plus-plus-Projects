//Kesaobaka Mafora
//43031072

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string gender;
    cout << "Enter your gender (M/F): ";
    cin >> gender;

    if (age >= 18 && (gender == "M" || gender == "F")){
        cout << "You are eligible to vote " << endl;
    }

    else {
        cout << "You are not eligible to vote";
    }
    return 0;
}
