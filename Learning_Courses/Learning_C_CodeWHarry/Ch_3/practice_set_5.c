// Write a program to determine whether a character entered by the user is lower case or not using ASCII


#include <stdio.h>

int main(){
	printf("\n");

	// chr ch = 'a';
	// printf("The character is %c",ch);
	// printf("The ASCII value of character is %d",ch);
	char word;
	printf("Enter a character : ");
	scanf("%c",&word);

	(("%d",word)>=97 && ("%d",word)<=122) ? printf("The entered character is lower case") : printf("The entered character is not lower case");
	
	printf("\n");
	return 0;
}
