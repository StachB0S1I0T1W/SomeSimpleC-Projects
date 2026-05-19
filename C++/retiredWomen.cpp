#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    cout << "Welcome to the Retired Women's Discount CLub Checker!" << endl;
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Wonderful!" << endl;
    cout << "Now, please enter your gender (M/F): " << endl;
    cin >> gender;

    if (age >= 60 && (gender == 'f' || gender == 'F')) {
        cout << "Your age is " << age << " and your gender is " << gender << endl;
        cout << "You are eligible." << endl;
    } else {
        cout << "Your age is " << age << " and your gender is " << gender << endl;
        cout << "You are not eligible." << endl;
    }

    return 0;
}