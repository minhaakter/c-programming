// take a number as input and find if it is even or odd

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is even" << endl;
    else
        cout << n << " is odd" << endl;

    return 0;
}