#include <iostream>
#include <string>

using namespace std;

string chosenPassword(string password)
{
    cout << "Choose the player that will choose the password for all of you to guess and have him enter the password below:" << endl;
    cin >> password;
    return password;
};

string hidePassword(string password)
{
    string hiddenPassword(password.length(), '*');
    return hiddenPassword;
};

string displayGameUI();

bool checkLetter();

int main()
{
    string password;
    chosenPassword(password);
    hidePassword(password);
    displayGameUI();
    checkLetter();
    return 0;
}