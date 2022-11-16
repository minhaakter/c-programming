// C Program to Convert Binary Number to Decimal and vice-versa


#include <stdio.h>
#include <math.h>

int main(){
    int n, dec, hex, oct;

    printf("Enter binary number: ");
    scanf("%d", &n);

    dec = 0;
    hex = 0;
    oct = 0;
    int i = 0;
    while(n != 0){
        dec = dec + (n % 10) * pow(2, i);
        hex = hex + (n % 10) * pow(2, i);
        oct = oct + (n % 10) * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("Decimal: %d\n", dec);
    printf("Hexadecimal: %x\n", hex);
    printf("Octal: %o\n", oct);

    return 0;
}