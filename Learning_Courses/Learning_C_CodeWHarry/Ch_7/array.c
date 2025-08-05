#include <stdio.h>

int main(){
    printf("\n");
	int marks[90]; // we are telling the compiler to be ready for 90 integral values in marks variable
    int num_of_std;
    
    printf("Enter the numbers of student data u want to insert in the array : ");
    scanf("%d",&num_of_std);

    int i = 0;

    do{
        printf("Enter the numbers of student %d : ",i+1);
        scanf("%d",&marks[i]);
        i++;
    } while(i<num_of_std);

    printf("\n");

    for(int i = 0 ; i<num_of_std ;  i++){
        printf("The numbers of student %d : %d \n",i+1,marks[i]);
    }

    printf("\n");
	return 0;
}
