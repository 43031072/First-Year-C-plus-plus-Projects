//Mafora Kesaobaka
//43031072
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;
//Prototype function for displaying the names and marks of students
void displayList(string arrNames[], double arrMarks[], int fake);

int main()
{
    //initializing variable to be used in the process
    const int space = 15;
    int fake = 10;
    double SortVariable1 = 0;
    string SortVariable2 = "" "";
    string arrNames[space] = {"Eric Mothupi","Mpumelelo Ndlov","Nomaldo Noma","Njabulo Mokoena","Kesaobaka Mafor","Forget Mpofu","Amanda Matjola","La toure","Dbayne Maf","Keoratile Lekgo"};
    srand(time(NULL));
    double arrMarks[space] = {};
    //Creating a for loop that assign random value to each index in the marks array
    for( int i = 0; i < fake; i++)
    {
        arrMarks[i] = (rand() % 100) + 1;
        //cout << " " << arrNames[i] << " \t"<< arrMarks[i] << endl;
    }
    //Calling the function to display names of student and their marks
    displayList(arrNames, arrMarks, fake);
    //for loop that sort marks in ascending order with the names of students
    for(int k = 0; k < fake; k++)
    {
        for(int m = k; m < fake; m++)
        {
            if(arrMarks[k] > arrMarks[m])
            {
                SortVariable1 = arrMarks[k];
                arrMarks[k] = arrMarks[m];
                arrMarks[m] = SortVariable1;

                SortVariable2 = arrNames[k];
                arrNames[k] = arrNames[m];
                arrNames[m] = SortVariable2;


            }


        }

    }
    /*for(int i = 0; i < fake; i++)
    {
        cout << (i + 1) << "\t" << setw(10) << left << arrNames[i] << "\t" << setw(10) << right << arrMarks[i] << endl;
    }*/
    //calling the fuction to display sorted marks and names of students
     displayList(arrNames, arrMarks, fake);
    //new variable for another condition that enable the useer to enter other student information
     string student;
     double mark;
     int position;
    // collecting information for the student to be added
     cout << "Enter your surname and name :";
     getline(cin,student);

     cout << "Enter the marks of the student: ";
     cin >> mark;

     cout << "Enter the position where you want to place your details: ";
     cin >> position;
    //for loop to enter the details in the position choose by the user
     for(int r = fake; r >= position - 1 ; r--)
     {
         arrMarks[r + 1] = arrMarks[r];
         arrNames[r + 1] = arrNames[r];
     }
     arrNames[position - 1] = student;
     arrMarks[position - 1] = mark;
     fake++;

     /*for(int i = 0; i < fake; i++)
     {
        cout << (i + 1) << "\t" << setw(10) << left << arrNames[i] << "\t" << setw(10) << right << arrMarks[i] << endl;
     }*/
    //Displaying updated  names  and marks of students
     displayList(arrNames, arrMarks, fake);

    return 0;
}

void displayList(string arrNames[], double arrMarks[], int fake)
{
    //this is a function that display the names and maeks of students
    cout << "\nList of students and their marks:" << endl;
    cout << " \t" << setw(10) << left << "Names" << "\t" << setw(10) << right << "Marks" << endl;
    for(int i = 0; i < fake; i++)
    {
        cout << (i + 1) << "\t" << setw(10) << left << arrNames[i] << "\t" << setw(10) << right << arrMarks[i] << endl;
    }
    cout << endl;
}
