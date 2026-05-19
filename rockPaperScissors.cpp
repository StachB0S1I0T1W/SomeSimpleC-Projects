#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // time()
using namespace std;

int main() {

    srand(time(nullptr)); // seeding the RNG with the current time
    string userCharacter;
    cout << "###  Welcome to Rock, Paper, Scissors game!  ###\n" << endl;
    cout << "Please enter the symbol of one of the things (R/P/S):" << endl;
    cin >> userCharacter;
    while ((userCharacter != "R" && userCharacter != "P" && userCharacter != "S") || (userCharacter.length() > 1 )) {
        cout << "Inappropriate user character. Please try again." << endl;
        cout << "Please enter the symbol of one of the things (R/P/S): " << endl;
        cin >> userCharacter;
    }
    char computerChosenCharacter;
    int randomNumber;
    randomNumber = rand() % 3;
    switch (randomNumber) {
        case 0:
            computerChosenCharacter = 'R';
            break;
        case 1:
            computerChosenCharacter = 'P';
            break;
        case 2:
            computerChosenCharacter = 'S';
        default:
            break;
    }
    if (userCharacter == "R") {
        if (computerChosenCharacter == 'P') {
            cout << "You: rock" << endl;
            cout << "Computer: paper" << endl;
            cout << "Paper beats rock! The computer won." << endl;
        } else if (computerChosenCharacter == 'S') {
            cout << "You: rock" << endl;
            cout << "Computer: scissors" << endl;
            cout << "Rock beats scissors! You won!" << endl;
        } else if (computerChosenCharacter == 'R') {
            cout << "User: rock" << endl;
            cout << "Computer: rock" << endl;
            cout << "It's a TIE!" << endl;
        }
    } else if (userCharacter == "S") {
        if (computerChosenCharacter == 'P') {
            cout << "User: scissors" << endl;
            cout << "Computer: paper" << endl;
            cout << "Scissors beats paper! You won!" << endl;
        } else if (computerChosenCharacter == 'R') {
            cout << "User: scissors" << endl;
            cout << "Computer: rock" << endl;
            cout << "Rock beats scissors! The computer won." << endl;
        } else if (computerChosenCharacter == 'S') {
            cout << "User: scissors" << endl;
            cout << "Computer: scissors" << endl;
            cout << "It's a TIE!" << endl;
        }
    } else if (userCharacter == "P") {
        if (computerChosenCharacter == 'R') {
            cout << "User: paper" << endl;
            cout << "Computer: rock" << endl;
            cout << "Paper beats rock! You won!" << endl;
        } else if (computerChosenCharacter == 'S') {
            cout << "User: paper" << endl;
            cout << "Computer: scissors" << endl;
            cout << "Scissors beats paper! The computer won." << endl;
        } else if (computerChosenCharacter == 'P') {
            cout << "User: paper" << endl;
            cout << "Computer: paper" << endl;
            cout << "It's a TIE!" << endl;
        }
    }
    return 0;
}

