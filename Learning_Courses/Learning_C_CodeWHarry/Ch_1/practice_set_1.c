// a) Write a C program to calculate area of a rectangle :

#include <stdio.h>

void hard_input(){
	int length = 10;
	int breadth = 20;
	int area_of_rectangle = length*breadth;
	printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, area_of_rectangle);
}

void user_input(){
    int length , breadth;
	printf("Enter the length of the rectangle in cm : ");
    scanf("%d", &length);
	printf("Enter the breadth of the rectangle in cm : ");
	scanf("%d", &breadth);
	printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, length*breadth);
}

int main(){

	printf("\n");
	hard_input();
	printf("\n");

	printf("\n");
	user_input();
	printf("\n");

	return 0;
}