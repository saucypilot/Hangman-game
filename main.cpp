#include <iostream>
#include <string>

using namespace std;

string chosenPassword()
{
    string chosenPassword;
    cout << "Choose the player that will choose the password for all of you to guess and have him enter the password below:" << endl;
    cin >> chosenPassword;
};

string hidePassword(string word)
{
    string hiddenPassword(chosenPassword.length(), '*');
};

string displayGameUI();

bool checkLetter();

int main()
{
    cout << "Welcome to Hangman!" << endl;
    return 0;
}