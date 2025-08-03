//Mafora Kesaobaka
//43031072
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct WeatherData
{
    double temperature;
    int humidity;
    bool isRain;
};
//function prototype for the code to main to recognise the functions under it
int findWarmRainyDay(WeatherData d[], int Weekdays);
void displayData(WeatherData d[], int Weekdays);

int main()
{
    const int Weekdays = 7;
     WeatherData d[Weekdays];

     srand(time(NULL));
    //Creating random number for temperature and humidity. To check if it is rainy condition to check the required humidity for rain is discribed
    for(int i = 0; i < Weekdays; i++)
    {
        d[i].temperature = rand() % 11 + 20;
        d[i].humidity = rand() % 100 + 1;
        d[i].isRain = d[i].humidity > 80;
    }
    //Calling display function to show the random temperature and humidity allocated for each day
    displayData(d, Weekdays);
    // initialising the function that check the hottest rainy day to a new variable
    // the new variable helps to display the result in a good manner
    int hotRainy = findWarmRainyDay(d, Weekdays);
    //condition to  check if the is any rain day or not
    if(hotRainy != -1)
    {
        //this will be displayed if the rain day with highest temperature is allocated
        cout << "Hottest rainy day of the week was day " <<hotRainy << " with the temperature of " << d[hotRainy - 1].temperature << " degrees C." << endl;
    }
    else
    {
        //this will display if there is no rainy day
        cout << "There is not rainy day" <<endl;
    }

    return 0;
}

void displayData(WeatherData d[], int Weekdays)
{
    //this function is used to display the results in a good manner
    cout << "Weather Report for the Week: " << endl;
    for(int i = 0; i < Weekdays; i++)
    {
        cout << "day " << (i + 1) << ":"<< endl;
        cout << "Temperature: " << d[i].temperature << " Degrees C" << endl;
        cout << "Humidity: " << d[i].humidity << "%" << endl;
        cout << "Rainy :" << d[i].isRain << endl;
        cout << "---------------------" << endl;
    }
}

int findWarmRainyDay(WeatherData d[], int Weekdays)
{
    //this variables will be used to compare the numbers generated but the random number generater to find the highest temperature
    int maxTemperature = 0;
    int maxRainy = -1;
    // the following check the status of the rain if it is true it then check the day with the highest temperature between the days that have rain
    for(int k = 0; k < Weekdays; k++)
    {
        if(d[k].isRain && d[k].temperature > maxTemperature)
        {
            maxTemperature = d[k].temperature;
            maxRainy = k +1;
        }
    }
    return maxRainy;
}

