// take two numbers as input divide them and find out quotient or said division and remainder 

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d / %d = %d remainder %d\n", a, b, a / b, a % b);

    return 0;
}