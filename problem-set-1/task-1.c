// C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even\n", num);
    }
    else{
        printf("%d is odd\n", num);
    }

    return 0;
}