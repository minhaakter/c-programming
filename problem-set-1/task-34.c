// C Program to Convert Octal Number to Decimal and vice-versa

#include <stdio.h>


int main(){
    int n, dec, hex, bin;

    printf("Enter octal number: ");
    scanf("%d", &n);

    dec = 0;
    hex = 0;
    bin = 0;
    int i = 0;

    while(n != 0){
        dec = dec + (n % 10) * pow(8, i);
        hex = hex + (n % 10) * pow(8, i);
        bin = bin + (n % 10) * pow(8, i);
        n = n / 10;
        i++;
    }
    printf("Decimal: %d\n", dec);
    printf("Hexadecimal: %x\n", hex);
    printf("Binary: %o\n", bin);

    return 0;
}