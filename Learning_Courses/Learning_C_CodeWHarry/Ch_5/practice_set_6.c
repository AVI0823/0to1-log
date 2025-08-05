/*Write a program using function to print the following pattern(first n lines)
*

* * *

* * * * *
*/

#include <stdio.h>

void print_pattern(int num){
    char element = '*';
    for(int i = 1; i<num ;i++){
        if(i%2==0){printf("\n\n");}
        else if(i%2!=0){
            for(int j = 1 ;j<=i;j++){    
                printf(" * ");
            }
        }
    }
}

int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print_pattern(n);

    printf("\n");
    return 0;
}