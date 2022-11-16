// separte the odd and even numbers from an array and put it in other arrays called odd and even

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int odd[10], even[10];

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            even[i] = arr[i];
        }
        else {
            odd[i] = arr[i];
        }
    }
    cout << "Odd numbers are: " << odd;
    cout << "Even numbers are: " << even;
    
return 0;
}