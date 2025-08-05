// Write a program to find the greatest of four numbers entered by the user 

#include <stdio.h>

int main(){
    printf("\n");

    int n1,n2,n3,n4;

    printf("Enter n1 : ");
    scanf("%d",&n1);    
    printf("Enter n2 : ");
    scanf("%d",&n2);
    printf("Enter n3 : ");
    scanf("%d",&n3);
    printf("Enter n4 : ");
    scanf("%d",&n4);

    int greatest = n1;

    if (n2>greatest){
        greatest = n2;
    }
    if (n3>greatest){
        greatest = n3;
    }
    if (n4>greatest){
        greatest = n4;
    }
    
    printf("greatest number of all four is : %d \n",greatest);

    printf("\n");
    return 0;
}