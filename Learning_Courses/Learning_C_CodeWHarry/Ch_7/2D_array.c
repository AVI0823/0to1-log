#include <stdio.h>


int main(){
    printf("\n");

    int arr2D[4][1] = {
        {1,4},
        {7,9},
        {5,4},
        {11,12}
    };
    printf("%d \n",arr2D[0][0]);
    printf("%d \n",arr2D[1][0]);
    printf("%d \n",arr2D[2][0]);
    printf("%d \n",arr2D[3][0]);
    printf("%d \n",arr2D[0][1]);
    printf("%d \n",arr2D[1][3]);
    printf("%d \n",arr2D[2][1]);
    printf("%d \n",arr2D[3][1]);   

    printf("\n");
    return 0;
}