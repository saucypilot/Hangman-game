#include <iostream>
#include <string>

using namespace std;

void gameUI()
{
    cout << "  +---+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|\\  |" << endl;
    cout << " / \\  |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

// Gets hidden word/phrase from user
string usersWord
{
    string word;
    cout << "For the game, have one chosen player make the hidden word or phrase. The other player will guess the word." << endl;
    cout << "Chosen player, What is your secret phrase or word? Press enter when done." << endl;
    cin >> word;
    return word;
}

// Turns user input into hidden dashes
string hiddenWord(string word)
{
    string hiddenWord;
    for (int i = 0; i < word.length(); i++)
    {
        hiddenWord += "_";
    }
    return hiddenWord;
}

// Gets user guess
string userGuess()
{
    cout << "It's time to guess the hidden word or phrase. You have 6 guesses. Good luck!" << endl;
    string guess;
    return guess;
}

// Checks if guess is correct
bool checkGuess(string guess, string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        
    }
}

int main()
{
    return 0;
}