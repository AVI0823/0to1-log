#include <stdio.h>


int main(){
    printf("\n");

    // using a integer pointer
    int a = 5;
    int* a_ptr = &a;
    printf("The address of a is %u \n",&a);
    printf("The address of a is %u \n",a_ptr);
    a_ptr++; // inc 4 bytes (as 1 integer = 4 bytes)
    printf("The address of a is %u \n",a_ptr);

    // using a character pointer    
    char b = 'A';
    char* b_ptr = &b;
    printf("The address of b is %u \n",&b);
    printf("The address of b is %u \n",b_ptr);
    b_ptr++; // inc 1 byte (as 1 character = 1 byte)
    printf("The address of b is %u \n",b_ptr);

    printf("\n");
    return 0;
}