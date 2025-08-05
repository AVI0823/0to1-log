// Write a program using recursion to calculate $n^{th}$ element of Fibonacci Series

#include <stdio.h>

int fibonacci(int num){
    // 1,1,2,3,5,8,13,21,...
    if(num==0){return(0);}
    else if(num==1){return(1);}
    else{
        return(fibonacci(num-1) + fibonacci(num-2));
    }
}

int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The %dth term in fibonachi is : %d",n,fibonacci(n));


    printf("\n");
    return 0;
}