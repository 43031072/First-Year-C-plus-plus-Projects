//Mafora Kesaobaka
//43031072
#include <iostream>
#include <iomanip>
using namespace std;
// the highest usage function made here
int findHighestUsage(int toolhours[], int SIZE) {
    //initializing variable of the highest integer to first index on the toolhour array
    int highest = toolhours[0];
    // this loop will run until the statement is false, where index i > size
    for (int i = 1; i < SIZE; i++) {
        if (toolhours[i] > highest) {
            highest = toolhours[i];
        }
    }
    //returning the value of the function
    return highest;
}
// the lowest usage function made here
int findLowestUsage(int toolhours[], int SIZE) {
    //initializing the first index of the toolhour array to lowest integer where we want to find the lowest value
    int lowest = toolhours[0];
    //this loop will execute until the statement is false  i > size
    for (int j = 1; j < SIZE; j++) {
        if (toolhours[j] < lowest) {
            lowest = toolhours[j];
        }
    }
    // returning the lowest value in the function
    return lowest;
}

int averageUsage(int toolhours[], int SIZE) {
    // initializing the sum variable which will be used to store the sum of the values in the toolhours array
    int sum = 0;
    // this loop will execute until the condition is false, where i > sizee
    for (int k = 0; k < SIZE; k++) {
        //the sum value is updated  everytime when the condition is true
        sum += toolhours[k];
    }
    return (sum ) / (SIZE);
}

void rankTools(int toolhours[], string toolNames[], int SIZE) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (toolhours[j] < toolhours[j + 1]) {
                // Swap tool hours
                int tempHours = toolhours[j];
                toolhours[j] = toolhours[j + 1];
                toolhours[j + 1] = tempHours;

                // Swap tool names
                string tempName = toolNames[j];
                toolNames[j] = toolNames[j + 1];
                toolNames[j + 1] = tempName;
            }
        }
    }
}

void displayTools(string toolNames[], int toolhours[], int SIZE) {
    for (int z = 0; z < SIZE; z++) {
        cout << left << setw(30) << toolNames[z] << setw(10) << ":" << right << toolhours[z] << " hours" << endl;
    }
}

int main() {
    //Initialized arrays with developer tool names and sample hours
    const int SIZE = 10;
    int toolhours[SIZE] = {25, 120, 40, 60, 35, 15, 90, 10, 5, 80};
    string toolNames[SIZE] = {"VScode", "IntelliJ IDea", "Docker", "Postman", "Git", "slack", "chrome devTools", "Pycharm", "Notion", "Figma"};

    displayTools(toolNames, toolhours, SIZE);
    cout << endl;
    //Displaying all the functions
    cout << "Highest usage: " << findHighestUsage(toolhours, SIZE) << " hours" << endl;

    cout << "\nLowest usage: " << findLowestUsage(toolhours, SIZE) << " hours" << endl;

    cout << "\nAverage usage (excluding highest and lowest): " << averageUsage(toolhours, SIZE) << " hours" << endl;

    cout << "\nRanking tools by usage:\n";

    rankTools(toolhours, toolNames, SIZE);
    displayTools(toolNames, toolhours, SIZE);

    return 0;
}
