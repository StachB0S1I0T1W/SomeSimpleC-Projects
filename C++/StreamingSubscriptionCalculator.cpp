#include <iostream>
using namespace std;

int main() {
    char package;
    int price;
    int additionalDevice;
    cout << "Welcome to the Streaming Subscription Calculator!" << endl;
    cout << "Please enter the package you would like to select (A/B/C): ";
    cin >> package;
    switch (package) {
        case 'A':
            price = 9;
            cout << "You have chosen Basic package." << endl;
            cout << "The cost of this package is " << price << "$/month. It includes 1 device" << endl;
            cout << "Enter how many simultaneous devices you used: " << endl;
            cin >> additionalDevice;
            cout << "Your total streaming plan is " << price + (additionalDevice - 1) * 6 << "$/month." << endl;
            break;
        case 'B':
            price = 14;
            cout << "You have chosen Standard package." << endl;
            cout << "The cost of this package is " << price << "$/month. It includes 3 devices." << endl;
            cout << "Enter how many simultaneous devices you used: " << endl;
            cin >> additionalDevice;
            cout << "Your total streaming plan is " << price + (additionalDevice - 3) * 4 << "$/month." << endl;
            break;
        case 'C':
            price = 20;
            cout << "You have chosen Premium package." << endl;
            cout << "The cost of this package is " << price << "$/month. It includes 5 devices." << endl;
            cout << "Enter how many simultaneous devices you used: " << endl;
            cin >> additionalDevice;
            cout << "Your total streaming plan is " << price + (additionalDevice - 5) * 2 << "$/month." << endl;
            break;
        default:
            cout << "Invalid package type! Please try again." << endl;
    }
    return 0;
}