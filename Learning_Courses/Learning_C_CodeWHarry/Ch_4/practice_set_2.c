// Write a program to print multiplication table of 10 in reverse order


#include <stdio.h>

int main(){
    printf("\n");

    for(int i = 10 ; i ; i--){
        printf("10 x %d = %d \n",i,10*i);
    }

    printf("\n");
    return 0;
}