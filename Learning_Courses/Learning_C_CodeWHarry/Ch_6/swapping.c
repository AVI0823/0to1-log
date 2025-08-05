#include <stdio.h>

void swap(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a = 3;
	int b = 4;
	swap(&a,&b);
    printf("%d and %d \n",a,b);
	return 0;
}