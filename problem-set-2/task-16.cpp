// power of a number, square of a number Write a problem 
// power means factorial of a number.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, choice;

    cout << "1. Power of a number" << endl;
    cout << "2. Square of a number" << endl;
    cout << "Choose a number: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a number: ";
        cin >> n;
        int power = 1;
        for (int i = 1; i <= n; i++)
            power *= i;
        cout << "Power of " << n << " is " << power << endl;
    } else if (choice == 2) {
        cout << "Enter a number: ";
        cin >> n;
        int square = n * n;
        cout << "Square of " << n << " is " << square << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

return 0;
}