// take two numbers as input and add them

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}