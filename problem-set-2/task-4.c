// take input of height, width and length and findout volume of a box

#include <stdio.h>

int main(){
    float height, width, length;

    printf("Enter height, width and length: ");
    scanf("%f %f %f", &height, &width, &length);

    printf("Volume of a box is %f\n", height * width * length);

    return 0;
}