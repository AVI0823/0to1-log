// Write a program to calculate the sum of the numbers occurring in the multiplication of 8 (from 1 to 10)


#include <stdio.h>

int main(){
    printf("\n");

    int sum = 0;
    for (int i = 1 ; i<=10 ; i++){
        sum = sum + i*8;
    }
    printf("The sum of the numbers occurring in the multiplication of 8 is : %d \n",sum);

    printf("\n");
    return 0;
}