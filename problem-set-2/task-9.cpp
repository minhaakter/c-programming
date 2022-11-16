// findout the sum of digits of a number (2 digits or 3 digits)

#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits of " << n << " is " << sum << endl;
    return 0;
}

