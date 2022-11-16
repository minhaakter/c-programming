// Write a program in C to count the total number of duplicate elements in an array

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

    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }

    printf("The number of duplicate elements is %d.\n", count);

    return 0;
}