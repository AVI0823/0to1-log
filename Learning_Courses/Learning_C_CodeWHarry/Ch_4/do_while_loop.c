

#include <stdio.h>

void n_natural_num(){

	int n = 0 , i = 1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
    do{
		printf("%d \n",i);
		i++;
	} while (i<=n);
}

int main(){
    printf("\n");

    int i = 0;
    do{
        printf("The valuse of i is %d \n", i);
        i++;
    } while (i<4);
    
    n_natural_num();

    printf("\n");
    return 0;
}