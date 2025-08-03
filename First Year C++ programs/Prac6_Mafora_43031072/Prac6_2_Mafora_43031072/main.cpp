//Mafora Kesaobaka
//43031072
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

// Function prototypes
int inputData(int* arr);
void displayData(int* arr, int value);
int findMode(int* arr, int value);
double findMedium(int* arr, int value);

// Main function
int main()
{
    // Initialize array of size 100
    int arr[100] = {};

    // Call inputData function to get the number of values entered
    int value = inputData(arr);

    cout << "\nValues Entered:" << endl;
    // Display the values entered by the user
    displayData(arr, value);

    // Find and display the mode of the values
    cout << "\nThe mode is: " << findMode(arr, value) << endl;

    // Display the values again (this seems redundant)
    displayData(arr, value);

    // Find and display the median of the values
    cout << "\nThe median is: " << findMedium(arr, value) << endl;

    return 0;
}

// Function to input data into the array
int inputData(int* arr)
{
    int counter = 0;

    cout << "Enter a value in the range 1 to 50: ";
    cin >> arr[counter];
    while(arr[counter] != -1)
    {
        counter++;
        cout << "Enter another value in the range 1 to 50: ";
        cin >> arr[counter];
        if(arr[counter] == -1)
            break;
    }
    return counter;
}

// Function to display data in the array
void displayData(int* arr, int value)
{
    for(int i = 0; i < value; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the mode of the values in the array
int findMode(int arr[], int value)
{
     sort(arr, arr + value);
     int maximum_count = 0, NoRepeat = -1, current_count = 1;
     for (int i = 1; i < value; i++) {
         if (arr[i] == arr[i - 1])
             current_count++;
         else {
             if (current_count > maximum_count) {
                 maximum_count = current_count;
                 NoRepeat = arr[i - 1];
             }
             current_count = 1;
         }
     }
     if (current_count > maximum_count)
     {
         maximum_count = current_count;
         NoRepeat = arr[value - 1];
     }
     return NoRepeat;
}

// Function to find the median of the values in the array
double findMedium(int arr[], int value)
{
     sort(arr, arr + value);
     if (value % 2 == 0)
         return (arr[value / 2 - 1] + arr[value / 2]) / 2.0;
     else
         return arr[value / 2];
}


