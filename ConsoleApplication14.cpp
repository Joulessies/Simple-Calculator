
#include <iostream>
using namespace std;

int main() {
    int x, y;
    char a; 
    string z;

    cout << "Simple Calculator";

    cout << "\nA - +";
    cout << "\nB - -";
    cout << "\nC - *";
    cout << "\nD - /";

    cout << "\nPick a letter of Operator: ";
    cin >> a;

    cout << "\nFirst Number: ";
    cin >> x;
    cout << "\nSecond Number: ";
    cin >> y;

    if (a == 'A' || a == 'a') {
        cout << "Result: " << x + y;
    }
    else if (a == 'B' || a == 'b') {
        cout << "Result: " << x - y;
    }
    else if (a == 'C' || a == 'c') {
        cout << "Result: " << x * y;
    }
    else if (a == 'D' || a == 'd') {
        if (y != 0) {
            cout << "Result: " << x / y;
        }
        else {
            cout << "Error: Division by zero";
        }
    }
    else {
        cout << "Invalid";
    }

    return 0;
}