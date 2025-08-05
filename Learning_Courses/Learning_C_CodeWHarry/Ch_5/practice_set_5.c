// Write a recursive function to calculate the sum of first "n" natural numbers

#include <stdio.h>

int sum_n(int num){
    if(num==1){return 1;}
    int sum = 0;
    return(sum_n(num-1)+num);
}

int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of first %d numbers is : %d",n,sum_n(n));

    printf("\n");
    return 0;
}