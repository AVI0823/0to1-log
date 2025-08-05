#include <stdio.h>

int main(){
	printf("\n");
	
	for ( int i = 0 ; i < 10 ; i++){
        if (i == 5){
            printf("The loop has been terminated as the value of i is %d \n", i);
            break;
        }
        printf("The value of i is %d \n", i);
    }
    printf("I am outside the for loop!");
	
	printf("\n");
	return 0;
}