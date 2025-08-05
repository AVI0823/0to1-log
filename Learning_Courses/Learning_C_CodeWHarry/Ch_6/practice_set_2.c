// Write a program having a variable `i`, print the address of `i`, 
// pass this variable to a function and print its address. 
// Are these address same?

#include <stdio.h>

void passing_variable(int x){
    printf("The address of i in the function is : %p\n",&x);
    printf("The address of i in integer form in the function is : %u\n",&x);
}

void passing_address(int* x){
    int* y = x;
    printf("The address of i in the function is : %p\n",y);
    printf("The address of i in integer form in the function is : %u\n",y);
}

int main(){
    printf("\n");

    int i = 5;

    printf("The address of i is : %p\n",&i);
    printf("The address of i in integer form is : %u\n",&i);

    passing_variable(i);

    passing_address(&i);

    printf("\n");
    return 0;
}

