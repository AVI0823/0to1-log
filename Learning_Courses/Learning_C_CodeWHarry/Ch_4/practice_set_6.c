// Write a program to sum first ten natural numbers using using `for` and `do-while` loop


#include <stdio.h>

void using_for(){
    int sum = 0;
    for(int i = 1;i<=10;i++){
        sum = sum + i;
    }
    printf("The sum of first ten using for : %d \n",sum);
}

void using_dowhile(){
    int i = 1 , sum = 0;
    do{
        sum = sum+i;
        i++;
    } while (i<=10);
    printf("The sum of first ten using for : %d \n",sum);
}

int main(){
    printf("\n");

    using_for();
    using_dowhile();

    printf("\n");
    return 0;
}