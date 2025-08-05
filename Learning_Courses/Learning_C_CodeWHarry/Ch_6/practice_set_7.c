#include <stdio.h>

void ten_times(int num){
    num = ((num)*10);
}

int main(){
    printf("\n");

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("The value of x before the function is : %d\n",x);
    ten_times(x);
    printf("The value of x after the function is : %d\n",x);

    printf("\n");
    return 0;
}