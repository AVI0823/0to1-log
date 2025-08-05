#include <stdio.h>

int factorial(int d){
    if(d==1||d==0){return(1);}
    return(d*factorial(d-1));
}

int main(){
    printf("\n");

    int n = 5;
    printf("The factorial of %d is %d",n,factorial(n));

    printf("\n");
    return 0;
}