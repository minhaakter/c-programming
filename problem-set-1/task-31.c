// Write a program in C to find an element in a given array (Linear search)

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

    int value;
    printf("Enter the value: ");
    scanf("%d", &value);

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == value){
            flag = 1;
            printf("The value is found at position %d.\n", i);
        }
    }
    if(flag == 0){
        printf("The value is not found.\n");
    }

    return 0;
}