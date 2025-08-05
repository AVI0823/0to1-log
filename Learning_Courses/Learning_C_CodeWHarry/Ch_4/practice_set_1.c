// Write a program to write Multiplication table of a given number


#include <stdio.h>

int main(){
    printf("\n");

    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    for(int i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d \n",number,i,number*i);
    }

    printf("\n");
    return 0;
}