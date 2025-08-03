// Kesaobaka Mafora
//43031072

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
 {
    const int max_attempt = 7; // maximum number of attempts allowed to be entered by the user.
    int number, guess, attempts;
    char playAgain;

    do {
        srand(time(0)); // seed the random number generator.
        number = rand() % 100 + 1; // this will generate a random number between 1 and 100.
        attempts = 0; // This will reset the number of attempts after every attempt.

        cout << "\nI'm thinking of a number between 1 and 100. You have " << max_attempt << " attempts to guess it." << endl;//Heading for the game in the output.

        do {
            cout << "Enter your guess: ";// This prompt the user to enter a number.
            cin >> guess;

            // validate the player's input
            while (guess < 1 || guess > 100) {
                cout << "\nInvalid input. Please enter a number between 1 and 100: ";
                cin >> guess;
            }

            // provide feedback on the player's guess and give the user the chance to enter a number until all the attempts are used
            if (guess > number) {
                cout << "Your guess is too high." << endl;
            } else if (guess < number) {
                cout << "Your guess is too low." << endl;
            }

            attempts++; // increment the number of attempts after each attempt
        } while (guess != number && attempts < max_attempt); // continue until the player guesses correctly or runs out of attempts

        // check if the player got the correct number before the attempt run out (won or lost).
        if (guess == number) {
            cout << "\nCongratulations! You guessed the number in " << attempts << " tries." << endl;
        } else {
            cout << "\nSorry, you've used all your attempts. The number was " << number << "." << endl;
        }

        // ask if the player wants to play again.
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y'); // continue playing if the player wants to

    return 0;
}
