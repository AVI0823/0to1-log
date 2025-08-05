// Write a program to give grades to students based on their marks

#include <stdio.h>

int main(){
    printf("\n");

    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if (marks>=90){
        printf("Grade A");
    }
    else if (marks>=80){
        printf("Grade B");
    }
    else if (marks>=70){
        printf("Grade C");
    }
    else if (marks>=60){
        printf("Grade D");
    }
    else if (marks>=50){
        printf("Grade E");
    }
    else{
        printf("Failed");
    }

    printf("\n");
    return 0;
}