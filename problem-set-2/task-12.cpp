// take a number as input and check if it is positive or negative

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
        cout << n << " is positive" << endl;
    else if (n < 0)
        cout << n << " is negative" << endl;
    else
        cout << n << " is zero" << endl;
    return 0;
}