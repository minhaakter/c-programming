// Write a program in C to delete an element at the desired position from an array.

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

    int position;
    printf("Enter the position: ");
    scanf("%d", &position);

    int arr_new[n - 1];
    for(int i = 0; i < position - 1; i++){
        arr_new[i] = arr[i];
    }

    for(int i = position - 1; i < n - 1; i++){
        arr_new[i] = arr[i + 1];
    }

    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr_new[i]);
    }

    printf("\n");

    return 0;
}