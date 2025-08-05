#include <stdio.h>

int change(int a){ a = 77 ; return a;}

int main(){
    printf("\n");

    int b = 22;
    int c = change(b);
    printf("The value of b and c is %d and %d\n",b,c);

    printf("\n");
    return 0;
}