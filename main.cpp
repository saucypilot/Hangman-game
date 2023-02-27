#include <iostream>
#include <string>

using namespace std;

string chosenPassword(string password);
void hidePassword(string &password);
void displayGameUI(string password);

int main()
{
    string password;
    chosenPassword(password);
    hidePassword(password);
    displayGameUI(password);
    return 0;
}

string chosenPassword(string password)
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

void displayGameUI(string password)
{
    cout << "  _______" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |    /|\\" << endl;
    cout << "  |    / \\" << endl;
    cout << "  |" << endl;
    cout << "__|__" << endl;
    cout << endl;
    cout << password << endl;
};