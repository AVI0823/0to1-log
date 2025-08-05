// c) Write a C program to convert Celsius into Fahrenheit

#include <stdio.h>

void CtoF(float temp){
	float c = temp;
	float f;
	f = ((9.0/5.0)*c + 32); 
	// We used 9.0 and 5.0 just to get the ans of the divide as a float
	// by default the C language assume it as integer which may cause unexpected output in our program
	printf("%.2f Celsius is %.2f in Fahrenheit.",c,f);
}

int main(){
	printf("\n");
	
	float c_temp; 
	printf("Enter the temperature in Celsius : ");
	scanf("%f", &c_temp);
	CtoF(c_temp);

	printf("\n");
	return 0;
}