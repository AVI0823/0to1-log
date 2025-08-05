#include <stdio.h>


int main(){
    printf("\n");

    int marks[] = {12,34,54,23};

    // int* prt = &marks[0];
    int* ptr = marks; // same as int* prt = &marks[0];

    for(int i = 0 ; i<4 ; i++){
        //printf("The marks at index %d is %d \n",i,marks[i]);
        printf("The marks at index %d is %d \n",i,*ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}