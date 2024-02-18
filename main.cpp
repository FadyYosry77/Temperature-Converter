#include <bits/stdc++.h>

using namespace std;

int main()  {
    char choice;
    double temp;

    cout << "Temperature Converter (Fahrenheit <--> Celsius)" << endl;
    cout << "=======================" << endl;

    while (true) {
        cout << "Choose The type of conversion:" << endl;
        cout << "[1] Fahrenheit to Celsius" << endl;
        cout << "[2] Celsius to Fahrenheit" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice == '1') {
            cout << "Enter in Fahrenheit: ";
            cin >> temp;
            cout << "In Celsius: " << (temp - 32) * 5.0 / 9.0 << "C" << endl;
        } else if (choice == '2') {
            cout << "Enter in Celsius: ";
            cin >> temp;
            cout << "In Fahrenheit: " << (temp * 9.0 / 5.0) + 32 << "F" << endl;
        } else {
            cout << "Please enter 1 or 2." << endl;
            continue;
        }
        cout << "Wanna convert another temperature? (y): " << endl;
        cout << "To break press any button except y. " << endl;
        cout << "=======================" << endl;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }
    cout << "Program finished." << endl;
    return 0;
}