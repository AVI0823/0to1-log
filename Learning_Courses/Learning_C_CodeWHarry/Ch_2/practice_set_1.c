// c) Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main(){
	printf("\n");

	int a;
	printf("Enter the Number : ");
	scanf("%d",&a);

    // int n = 10;
	// int r = a%n;
    // printf("%d",r);

	if ((a%10) == 0){
		printf("Divisible \n");
    } else{
		printf("Not divisible \n");
    }

	printf("\n");
	return 0;
}