// Write a program to check if the given number is prime or not using for loop


#include <stdio.h>

int main(){
    printf("\n");

    int num;    
    printf("Enter the number : ");
    scanf("%d",&num);

    char is_prime = 'y';
    
    for(int i = 2 ; i<(num) ; i++){
        if((num%i)==0){
            is_prime = 'n';
        }
    }
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }

    printf("\n");
    return 0;
}