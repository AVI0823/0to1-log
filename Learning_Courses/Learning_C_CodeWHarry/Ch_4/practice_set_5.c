// Write a program to sum first ten natural numbers using while loop


#include <stdio.h>

int main(){
    printf("\n");

    int i = 1 , sum = 0;

    while(i<=10){
        sum = sum + i;
        i++;
    }
    printf("The sum of first 10 natural numbers is : %d",sum);

    printf("\n");
    return 0;
}