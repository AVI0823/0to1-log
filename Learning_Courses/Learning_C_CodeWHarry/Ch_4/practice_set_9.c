// Write  a program to calculate factorial of a given number using `while` loop


#include <stdio.h>

int main(){
    printf("\n");

    int factorial = 1 ,num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int i = num;

    while(i>0){
        factorial = i*factorial;
        i--;
    }

    printf("The factorial of num %d is : %d \n",num,factorial);

    printf("\n");
    return 0;
}