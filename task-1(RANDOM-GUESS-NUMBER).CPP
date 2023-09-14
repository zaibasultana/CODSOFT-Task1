//TASK-1
/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main() {
    bool playAgain = true;  // Initialize to true to allow playing at least once

    while (playAgain) {
        // Seed the random number generator with the current time
        srand(static_cast<unsigned int>(time(0)));

        // Generate a random number between 1 and 100
        int randomNumber = rand() % 100 + 1;

        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

        while (true) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess < randomNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > randomNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts." << endl;
                break; // Exit the loop when the correct number is guessed
            }
        }

        // Ask if the player wants to play again
        char playChoice;
        cout << "Do you want to play again? (y/n): ";
        cin >> playChoice;
        playAgain = (playChoice == 'y' || playChoice == 'Y');
    }

    cout << "Thank you for playing! Goodbye." << endl;

    return 0;
}

