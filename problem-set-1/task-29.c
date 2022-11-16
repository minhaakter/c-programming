// Write a program in C to insert a new value in the array (unsorted list)

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

    int new_value;
    printf("Enter the new value: ");
    scanf("%d", &new_value);

    int arr_new[n + 1];
    for(int i = 0; i < n; i++){
        arr_new[i] = arr[i];
    }
    arr_new[n] = new_value;
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr_new[i]);
    }
    printf("\n");

    return 0;
}