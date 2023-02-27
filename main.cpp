#include <iostream>
#include <string>

using namespace std;

string chosenPassword(string &password);
void hidePassword(string &password);
void checkPassword(string &password, string &hangman, int &numIncorrectGuesses);

int main()
{
    string password;
    string hangman = " _____\n |    |\n      |\n      |\n      |\n      |\n______|";
    int numIncorrectGuesses = 0;

    chosenPassword(password);
    hidePassword(password);
    while (numIncorrectGuesses < 6)
    {
        checkPassword(password, hangman, numIncorrectGuesses);
    }
    return 0;
}

string chosenPassword(string &password)
{
    cout << "Choose the player that will choose the password for all of you to guess and have him enter the password below:" << endl;
    cin >> password;
    return password;
};

void hidePassword(string &password)
{
    // turn password into a string of underscores
    for (int i = 0; i < password.length(); i++)
    {
        password[i] = '_';
    }
};

void checkPassword(string &password, string &hangman, int &numIncorrectGuesses)
{
    char guess;
    if (hangman.find(guess) == string::npos)
    {
        numIncorrectGuesses++;
        if (numIncorrectGuesses == 1)
        {
            hangman.replace(20, 1, "O");
        }
        else if (numIncorrectGuesses == 2)
        {
            hangman.replace(31, 2, "/\\");
        }
        else if (numIncorrectGuesses == 3)
        {
            hangman.replace(35, 1, "|");
        }
        else if (numIncorrectGuesses == 4)
        {
            hangman.replace(36, 1, "\\");
        }
        else if (numIncorrectGuesses == 5)
        {
            hangman.replace(38, 1, "/");
        }
        else if (numIncorrectGuesses == 6)
        {
            hangman.replace(39, 1, "\\");
        }
    }
};