// Write a program using function to find average of three numbers

#include <stdio.h>

float three_avg(int num1,int num2,int num3){
    return((num1+num2+num3)/3.0);
}

int main(){
    printf("\n");

    int x,y,z;
    printf("Enter the value of num1 : ");
    scanf("%d",&x);
    printf("Enter the value of num2 : ");
    scanf("%d",&y);
    printf("Enter the value of num3 : ");
    scanf("%d",&z);
    printf("The avg of numbers %d, %d and %d is : %.2f \n",x,y,z,three_avg(x,y,z));

    printf("\n");
    return 0;
}