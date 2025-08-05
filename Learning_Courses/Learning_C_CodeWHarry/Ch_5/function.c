

#include <stdio.h>

int sum(int,int);

int sum(int x, int y){
    printf("sum : %d",x+y);
    return x+y;
}

int main(){
    printf("\n");

    int x = sum(56,25);

    printf("\n");
    return 0;
}