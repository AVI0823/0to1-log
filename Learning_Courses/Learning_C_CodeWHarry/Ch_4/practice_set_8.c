// Write  a program to calculate factorial of a given number using for loop


#include <stdio.h>

int main(){
    printf("\n");

    int factorial = 1 ,num;

    printf("Enter the number : ");
    scanf("%d",&num);

    for (int i = num ; i>0 ; i--){
        factorial = i*factorial;
    }
    printf("The factorial of num %d is : %d \n",num,factorial);

    printf("\n");
    return 0;
}