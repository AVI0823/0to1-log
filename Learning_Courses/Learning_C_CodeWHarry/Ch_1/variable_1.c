// Chapter 1

// Variable and Data Types in C

#include <stdio.h>

int main(){
    int a; // Variable declaration
    a = 6; // Variable initialization
    // int a = 1; // int = integeral values
    printf("The output of this program is %d", a); // %d is a format specifier for integers

    float b = 1.4; // float = decimal values
    char c = 'a'; // char = character(string) • USE ONLY AND ONLY '...' 

    
    // code to find the storage of the database

	printf("\nSize of int: %zu bytes\n",sizeof(int));
	printf("Size of char: %zu bytes\n",sizeof(char));
	printf("Size of float: %zu bytes\n",sizeof(float));

    return 0;
}