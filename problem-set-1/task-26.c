// Write a program in C to find the sum of all elements of the array

#include <stdio.h>

int main(){
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("The sum of all elements is %d.\n", sum);

    return 0;
}