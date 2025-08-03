//Mafora Kesaobaka
//43031072
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void displayData(int* pGrowthInPopulation, int pYear);
int calculateAverage(int* pGrowthInPopulation, int* pAve);
int findHighestPopulation(int* pGrowthInPopulation, int pYear, int* pHighestGrowth);

int main()
{
    // Define the number of years and initialize variables for average and highest growth
    const int pYear = 10;
    int pAve = 0;
    int pHighestGrowth = 0;

    // Initialize the array with population growth data
    int pGrowthInPopulation[pYear] = {95000,80000,50000,100000,70000,60000,55000,75000,67000,87000};

    // Display the header
    cout << "=====================================" << endl;
    cout << "Population Growth Rate Over 10 Years" << endl;
    cout << "=====================================" << endl;

    // Call functions to display data, calculate average and find highest population growth
    displayData(pGrowthInPopulation, pYear);
    calculateAverage(pGrowthInPopulation, &pAve);
    findHighestPopulation(pGrowthInPopulation, pYear, &pHighestGrowth);

    // Display the average and highest population growth rate
    cout << "\nThe average population growth rate within 10 years is: " << pAve << endl;
    cout << "The highest population growth rate within 10 years is: " << pHighestGrowth << endl;

    return 0;
}

// Function to display the population growth data
void displayData(int* pGrowthInPopulation, int pYear)
{
    for(int i = 0; i < pYear; i++)
    {
        cout <<fixed << left <<  "Year " << setw(7) << (i + 1) << pGrowthInPopulation[i] << endl;
    }
}

// Function to calculate the average population growth
int calculateAverage(int* pGrowthInPopulation, int* pAve)
{
     for( int i = 0; i < 10; i++)
     {
        *pAve = *pAve+*(pGrowthInPopulation + i);
     }

     *pAve = *pAve/10;
     return *pAve;
}

// Function to find the year with the highest population growth
int findHighestPopulation(int* pGrowthInPopulation, int pYear, int* pHighestGrowth)
{
    for(int i = 0; i < pYear; i++)
    {
        if(*(pGrowthInPopulation + i) > *pHighestGrowth)
        {
            *pHighestGrowth = *(pGrowthInPopulation + i);
        }
    }

    return *pHighestGrowth;
}
