// C Program to Display Fibonacci Sequence

#include <stdio.h>

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int a = 0, b = 1, c = 0;
    printf("%d ", a);
    printf("%d ", b);
    for(int i = 2; i <= n; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}