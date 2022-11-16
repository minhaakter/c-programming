// C Program to Find LCM of two Numbers

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int gcd = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    printf("The LCM of %d and %d is %d.\n", a, b, a * b / gcd);

    return 0;
}