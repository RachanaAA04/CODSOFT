#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess = 0;  // variable to store the user's guess

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // We'll keep asking the user until they guess correctly
    while (userGuess != secretNumber)
     {
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Check if the guess is too high, too low, or correct
        if (userGuess < secretNumber) 
         {
            cout << "Too low. Try again!" << endl;
        }
        else if (userGuess > secretNumber) 
         {
            cout << "Too high. Try again!" << endl;
        } 
        else
         {
            cout << "Awesome! You guessed it right!" << endl;
        }
    }

    cout << "Thanks for playing. Goodbye!" << endl;

    return 0;
}