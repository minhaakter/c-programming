// Write a C program to accept a coordinate point in an XY coordinate system and determine which quadrant the coordinate point lies.

#include <stdio.h>

int main(){
    int x, y;

    printf("Enter x, y coordinate: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0){
        printf("The point lies in the first quadrant.\n");
    }
    else if(x < 0 && y > 0){
        printf("The point lies in the second quadrant.\n");
    }
    else if(x < 0 && y < 0){
        printf("The point lies in the third quadrant.\n");
    }
    else if(x > 0 && y < 0){
        printf("The point lies in the fourth quadrant.\n");
    }
    else if(x == 0 && y != 0){
        printf("The point lies on the x-axis.\n");
    }
    else if(x != 0 && y == 0){
        printf("The point lies on the y-axis.\n");
    }
    else{
        printf("The point lies on the origin.\n");
    }

    return 0;
}