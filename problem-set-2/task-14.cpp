// GCD,LCM of two numbers

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = __gcd(a, b);
    int lcm = a * b / gcd;
    
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}