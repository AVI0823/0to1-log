// i will keep editing this code as i learn along (sorry if there are any spelling mistakes)

#include <stdio.h>

void input_matrix(int rows, int cols, int matrix[rows][cols]){

    //initilizing all the matrix as 0 value matrix 
        for(int i = 0 ; i<rows ; i++){
            for(int j = 0 ; j<cols ; j++){
                matrix[i][j]=0;
            };
        };

    // taking inputs : 
        for(int i = 0 ; i<rows ; i++){
            for(int j = 0 ; j<cols ; j++){

    //printing the matrix as user gives the input for better readablity
                for(int i = 0 ; i<rows ; i++){
                    printf("| ");
                    for(int j = 0 ; j<cols ; j++){
                        printf("%d ",matrix[i][j]);
                    };
                    printf("|");
                    printf("\n");
                };

    //taking input from the user and inserting it into the matrix
                int temp;
                printf("Enter the %d,%d value in array : ",i+1,j+1);scanf("%d",&temp);
                matrix[i][j]=temp;
            };
        };
};

void print_matrix(int rows, int cols, int matrix[rows][cols]){

    // just directly printing the matrix
        for(int i = 0 ; i<rows ; i++){
            printf("| "); // just for my ADHD 
            for(int j = 0 ; j<cols ; j++){
                printf("%d ",matrix[i][j]);
            };
            printf("|"); // just for my ADHD
            printf("\n");
        };
};

void add_matrix(int rows, int cols, int matrix_m1[rows][cols], int matrix_m2[rows][cols]){
        
    // just directly printing the matrix
        for(int i = 0 ; i<rows ; i++){
            printf("| "); // just for my ADHD 
            for(int j = 0 ; j<cols ; j++){
                printf("%d ",matrix_m1[i][j] - matrix_m2[i][j]);
            };
            printf("|"); // just for my ADHD
            printf("\n");
        };
};

void subs_matrix(int rows, int cols, int matrix_m1[rows][cols], int matrix_m2[rows][cols]){
        
    // just directly printing the matrix
        for(int i = 0 ; i<rows ; i++){
            printf("| "); // just for my ADHD 
            for(int j = 0 ; j<cols ; j++){
                printf("%d ",matrix_m1[i][j] - matrix_m2[i][j]);
            };
            printf("|"); // just for my ADHD
            printf("\n");
        };
};

int main(){
    printf("\n");

    printf("Making and priting two user defined matrix : \n\n");

    // Matrix 1
        printf("\nMatrix 1 input : \n");

    // taking parameter inputs for the matrix 1
            int row_1,col_1;
            printf("Enter the number of rows : ");scanf("%d",&row_1);
            printf("Enter the number of columns : ");scanf("%d",&col_1);
            int matrix_1[row_1][col_1];

    // making user defined matrix
                input_matrix(row_1,col_1,matrix_1);

        printf("\nMatrix 1 : \n"); 
    // printing matrix
            print_matrix(row_1,col_1,matrix_1);

    // Matrix 2
        printf("\nMatrix 2 input: \n");

    // taking parameter inputs for the matrix 2
            int row_2,col_2;
            printf("Enter the number of rows : ");scanf("%d",&row_2);
            printf("Enter the number of columns : ");scanf("%d",&col_2);
            int matrix_2[row_2][col_2];

    // making user defined matrix
                input_matrix(row_2,col_2,matrix_2);

        printf("\nMatrix 2 : \n");
    // printing matrix
            print_matrix(row_2,col_2,matrix_2);


    // asking the user to ask for what he wants (just to make the shit flow user friendly)
        printf("\n\nWhat operatrions would you like to perform on your two martixes : \n");
        printf("Enter 1 to ADD \nEnter 2 to SUBSTRACT \n");
        printf("ENTER 3 to Multiply (Matrix 1 * Matrix 2)\n");
        printf("ENTER 4 to Multiply (Matrix 2 * Matrix 1)\n");
        int op;
        printf("Enter : ");scanf("%d",&op);

            if(op == 1){
                printf("\n\nAdding : Matrix 3 = Matrix 1 - Matrix 2\n");

                    if(row_1==row_2  && col_1==col_2){
                        add_matrix(row_1,col_1,matrix_1,matrix_2);
                    }
                    else{
                        printf("\nThe Matrix 1 and Matrix 2 can't be added...\nOnly matrix with same n * m can be added\n");
                    }
            }
            else if(op == 2){
                printf("\n\nSubstracting : Matrix 3 = Matrix 1 - Matrix 2\n");
                
                    if(row_1==row_2  && col_1==col_2){
                        subs_matrix(row_1,col_1,matrix_1,matrix_2);
                    }
                    else{
                        printf("\nThe Matrix 1 and Matrix 2 can't be substracted...\nOnly matrix with same n * m can be substracted\n");
                    }

            }
            else if(op == 3){
                printf("\n\nMultipliying : Matrix 3 = Matrix 1 * Matrix 2\n");
                
            }
            else if(op == 4){
                printf("\n\nMultipliying : Matrix 3 = Matrix 2 * Matrix 1\n");

            }
            else{
                printf("Invalid input : %d \nTry Again...");
            }


    printf("\n");
    return 0;
}
