// Write a program in C to read n number of values in an array and display it in reverse order.


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
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}