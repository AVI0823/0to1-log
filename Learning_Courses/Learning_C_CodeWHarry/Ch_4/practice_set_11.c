// Write a program to check if the given number is prime or not using `while` and `do-while` loops


#include <stdio.h>

void using_while(int(num)){
    int i = 2;
    char is_prime = 'y';
    while(num>i){
        if((num%i)==0){
            is_prime = 'n';
        }
        i++;
    }
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }
}

void using_dowhile(int(num)){
    int i = 2;
    char is_prime = 'y';
    do{
        if((num%i)==0){
            is_prime = 'n';
        }
        i++;
    } while(num>i);
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }
}

int main(){
    printf("\n");

    int num;    
    printf("Enter the number : ");
    scanf("%d",&num);

    using_while(num);    

    using_dowhile(num);

    printf("\n");
    return 0;
}