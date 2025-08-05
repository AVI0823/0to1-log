#include <stdio.h>

int main(){
	printf("\n");
	
	for ( int i = 0 ; i < 10 ; i++){
	   if (i == 5){
            printf("The iteriation has been terminated at the value of i : %d \n", i);
            continue;
        }
        printf("The value of i is %d \n", i);
	}
	printf("I am outside the for loop!");

	printf("\n");
	return 0;
}