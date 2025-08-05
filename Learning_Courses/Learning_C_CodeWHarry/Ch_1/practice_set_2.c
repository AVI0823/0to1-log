// b) Write a C program to calculate the area of a circle , and modify the same code to calculate the volume of a cylinder :

#include <stdio.h>

int main(){
    printf("\n");

    int radius,height;
    float area_of_circle, volume_of_cylinder;

    printf("Enter the radius of the circle in cm : "); 
    scanf("%d", &radius);
    area_of_circle = (3.14*radius*radius);
    printf("Area of the circle with radius %d cm is %f cm^2",radius, area_of_circle);
    
    printf("\n");

    printf("Enter the height of the circle in cm : "); 
    scanf("%d", &height);
    volume_of_cylinder = area_of_circle*height;
    printf("Area of the circle with radius %d cm and height %d cm is %f cm^2",radius,height,volume_of_cylinder);
    
    printf("\n");
    return 0;
}