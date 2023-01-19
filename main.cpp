#include <iostream>
#include <string>

using namespace std;

void gameUI(){
    cout << "  +---+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|\\  |" << endl;
    cout << " / \\  |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

string usersWord{
    string word;
    cout << "For the game, have one chosen player make the hidden word or phrase. The other player will guess the word." << endl;
    cout << "Chosen player, What is your secret phrase or word? ";
    cin >> word;
    return word;
}

int main()
{
    return 0;
}