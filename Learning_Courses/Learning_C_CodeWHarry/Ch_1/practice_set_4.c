#include <stdio.h>

int main(){
	printf("\n");
	
	float p,si;
	int r,t;
	printf("Enter the Principal Amount : ");
	scanf("%f",&p);
	printf("Enter the Rate of Intrest in percentage : ");
	scanf("%i",&r);
	printf("Enter the Time period in years : ");
	scanf("%i",&t);
	si = (p*r*t)/100;
	printf("The Simple Intrest is %.2f Rs",si);
	
	printf("\n");
	return 0;
}