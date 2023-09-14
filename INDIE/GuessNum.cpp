#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int secret_number = 75;
    int guess;
    int guess_count = 0;
    int guess_limit = 4;
    bool can_guess = true;

    cout << "You have 5 chances. Guess an integer between 1 to 100: ";
    cin >> guess;

    while (guess != secret_number && can_guess == true)
    {
        if (guess_count < guess_limit)
        {
            cout << "Wrong!\n" << endl;
            cout << "Make another guess: ";
            cin >> guess;
            guess_count++;
        }
        else if (guess_count == guess_limit)
        {
            cout << "Wrong!\n" << endl;
            cout << "Out of guesses. You lose." << endl;
            can_guess = false;
        }
    }
    if (guess == secret_number)
    {
        cout << "Correct! You guessed the secret number "
             << secret_number << "." << endl;
        cout << "You win!!!" << endl;
        can_guess = false;
    }
}