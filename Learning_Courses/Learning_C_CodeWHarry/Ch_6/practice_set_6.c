// Write a program to print the value of a variable `i` 
// using the "pointer to pointe" type of variable

#include <stdio.h>


int main(){
    printf("\n");

    int i = 69;
    int* pointer_for_i = &i;
    int** pointer_for_pointer_of_i = &pointer_for_i;

    printf("The value of i is : %d \n",i);
    printf("The value of i using a pointer is : %d \n",*pointer_for_i);
    printf("The value of i using the pointer to pointer is : %d \n",**pointer_for_pointer_of_i);

    printf("\n");
    return 0;
}