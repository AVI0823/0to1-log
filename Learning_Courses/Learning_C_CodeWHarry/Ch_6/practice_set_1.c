// Write a program to print the address of a variable, use this address to get the value of the variable

#include <stdio.h>

int main(){
    printf("\n");

    int a;
    printf("Enter a number for variable a : ");
    scanf("%d",&a);
    int* b = &a;
    
    printf("The address of a is :\n%p in hexadecimal,\n%u in integer\n",&a,b);

    printf("The value at address %p is : %d\n",b,*(&a));

    printf("\n");
    return 0;
}