// Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

float c_to_f(float num){
    float f = (((9.0/5.0)*num)+32);
    return(f);
}

int main(){
    printf("\n");

    float temp;
    printf("Enter the temperature in Celsius : ");
    scanf("%f",&temp);

    printf("The value of %.1f degree Celsius is : %.1f Fahrenheit\n",temp,c_to_f(temp));

    printf("\n");
    return 0;
}