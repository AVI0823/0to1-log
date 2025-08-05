#include <stdio.h>

int main() {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a); // Read an integer from the user and store it at the memory address of variable a.
	// scanf("Format Specifier" , address of variable)
	// scanf("%d", ...) : means -> It tells the scanf function "I am EXPECTING the user to type an integer"
	// scanf("...", &a) : means -> It tells the scanf function where to store the input (in this case, store in a)
	printf("The value of a is %d", a);
	// %d tells the printf function that we need to print a integer (in our case its a)
	return 0;
}