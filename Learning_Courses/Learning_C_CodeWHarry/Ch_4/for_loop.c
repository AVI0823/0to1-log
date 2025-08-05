

#include <stdio.h>

void first_n_natural_num(){

	int n = 0;

	printf("Enter the value of n : "); 
	scanf("%d",&n);

	for ( int i = 1 ; i <=n ; i++ ){
		printf("The value of i is %d \n",i);
	}
}

int main(){
    printf("\n");

    int n = 6;

    for ( int i = 0 ; i < n ; i++ ) {
        printf("The value of i is %d \n",i);
    }

    first_n_natural_num();

    printf("\n");
    return 0;
}