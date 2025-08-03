//Mafora Kesaobaka
//43031072
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct player
{
    string name;
    int score;
};
//function prototype for the main to recognise their presence
int generateRandomNumber();
void playGame(player p, int RandomNumber);
int main()
{
    player p;
    string names;
    char answer;

    cout << "Enter your names: ";
    getline(cin,names);

    p.name = names;
    p.score = 100;

    //cout << "Your names are " << player.name << " and your score is " << player.score << endl;

    // calling the function in the main function to be displayed
    int RandomNumber = generateRandomNumber();
    playGame(p, RandomNumber);
    // this is a condition where the use have to choose if she or he want to play again or not
    do
    {
        //collecting the users choice
        cout << "\nDo you want to play again(y/n): ";
        cin >> answer;
    //this  part check the users input in order to direct the code
        if(answer == 'y' || answer == 'Y')
        {
            srand(time(NULL));
            int RandomNumber = generateRandomNumber();
            playGame(p, RandomNumber);
        }
        else
        {
            break;
        }
    }while(answer != 'n' || answer != 'N');

    return 0;
}

int generateRandomNumber()
{
    // this is a function that create random number to be guessed by the user
    // srand(time(null)) is used to seed the random number generator to make different number with time difference
    srand(time(NULL));

    //creating a random number between one and ten
    int RandomNumber = rand() % 10 + 1;

    //cout << RandomNumber;

    return RandomNumber;
}

void playGame(player p, int RandomNumber)
{
    // this function is all about the game and all the conditions with question, games are all found here
    int guessNumber;
    cout << "\nWelcome to my game " << p.name << ". Lets play a guess number game." << endl;
    cout << "I'm thinking of a number between 1 and 10. Please Guess the number!" << endl;

    int counter = 0;

    do
    {
        // this  part collects the users input and runs through the conditions to give the user the right answer
        counter++;
        cout << "\nEnter your guess: ";
        cin >> guessNumber;

        if(guessNumber > RandomNumber)
        {
            cout << "Your guess is too high! Try again." << endl;
        }
        else if(guessNumber < RandomNumber)
        {
            cout << "Your guess is too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations, " << p.name << ", you guessed the number " << RandomNumber << " in " << counter << " attempts\n" << endl;
        }
        p.score -= 10;
        if (p.score == 0)
        {
            break;
        }

    }while(guessNumber != RandomNumber);

    if (p.score == 0)
    {
        cout << "\nGameover " << p.name << " your score is used up." << endl;
    }
    else
    {
        cout << "\nThank you for playing " << p.name << " your final score is: " << p.score << endl;
    }

}
