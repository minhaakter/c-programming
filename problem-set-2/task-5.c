// take length and width to find out area of a rectangle

#include <stdio.h>

int main(){
    float length, width;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    printf("Area of a rectangle is %f\n", length * width);

    return 0;
}