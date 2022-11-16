//  Find factorial of a number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}