// findout reverse of a 3 digit number without using loop

#include <stdio.h>

int main(){
    int n;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    printf("Reverse of %d is %d%d%d\n", n, n % 10, (n / 10) % 10, (n / 100) % 10);

    return 0;
}