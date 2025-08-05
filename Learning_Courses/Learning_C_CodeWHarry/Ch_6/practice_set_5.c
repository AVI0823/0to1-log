// Write a program using a function which calculates the sum and the average of two numbers,
// use pointers and print the values of sum and average in main()

#include <stdio.h>

int* sumof(int x, int y){
    int sum = (x)+(y);
    int* address_of_sum = &sum;
    printf("The sum of %d and %d is : %d \n",x,y,sum);
    return(address_of_sum);
}

float* avgof(int x, int y){
    float avg = (x)+(y)/2.0;
    float* address_of_avg = &avg;
    printf("The average of %d and %d is : %f \n",x,y,avg);
    return(address_of_avg);
}

int main(){
    printf("\n");

    int a = 5;
    int b = 5;


    printf("The address of sum is %u and the address of average is %u \n",sumof(a,b),avgof(a,b));

    printf("\n");
    return 0;
}