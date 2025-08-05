#include <stdio.h>

void dec_for(){

	for ( int i = 5 ; i ; i-- ){
		printf("The value of i is %d \n",i);
	}
}

void n_reverse(){

	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	for( n ; n>=1 ; n--){
		printf("%d \n",n);
	}
}

int main(){
    printf("\n");

    int n = 6;
    
    for ( int i = 10 ; i > n ; i-- ) {
        printf("The value of i is %d \n",i);
    }    

    dec_for();

    n_reverse();

    printf("\n");
    return 0;
}