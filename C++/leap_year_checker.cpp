#include <iostream>

using namespace std;

int main() {
    int starting_year;
    int ending_year;
    cout << "### Welcome to the Leap Year Checker! ###" << endl;
    cout << "Please enter the starting year:  ";
    cin >> starting_year;
    cout << "Wonderful!\n";
    cout << "Now please enter the ending year:  ";
    cin >> ending_year;
    for (int start = starting_year; start <= ending_year; start++) {
        if (start % 4 != 0) {
            cout << start << " is a common year." << endl;
        } else if (start % 100 != 0) {
            cout << start << " is a leap year." << endl;
        } else if (start % 400 != 0) {
            cout << start << " is a common year." << endl;
        } else {
            cout << start << " is a leap year." << endl;
        }
    }
    return 0;
}

