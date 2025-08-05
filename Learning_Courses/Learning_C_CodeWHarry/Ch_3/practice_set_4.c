// Write a program to find whether the input year is leap year or not

#include <stdio.h>

int main(){
    printf("\n");

    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    ((((year%4) == 0) && ((year%100) != 0) )|| (year%400 == 0)) ? printf("The year %d is a leap year\n",year) : printf("The year %d is not a leap year\n",year);

    printf("\n");
    return 0;
}