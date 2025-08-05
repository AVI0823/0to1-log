/* Write a program to determine whether the student has passed or failed. 
To pass a student requires a total of 40% and at least 33% in each subject. 
Assume there are three subjects and take the marks input from the user. */

#include <stdio.h>

int main(){
    printf("\n");

    int total_marks;
    printf("Enter the maximum marks of exam : ");
    scanf("%i",&total_marks);

    float m1,m2,m3;
    printf("Enter your marks in subject 1 out of %d : ",total_marks);
    scanf("%f",&m1);
    printf("Enter your marks in subject 2 out of %d : ",total_marks);
    scanf("%f",&m2);
    printf("Enter your marks in subject 3 out of %d : ",total_marks);
    scanf("%f",&m3);
    
    if ((m1/total_marks) >= 0.33 && (m2/total_marks) >= 0.33 && (m3/total_marks) >= 0.33){
        if (((m1+m2+m3)/(total_marks*3) >= 0.40)){
            printf("\nYou Passed \n");
            printf("Your scored %.2f percentage in subject 1 \n",((m1/total_marks)*100));
            printf("Your scored %.2f percentage in subject 2 \n", ((m2/total_marks)*100));
            printf("Your scored %.2f percentage in subject 3 \n",((m3/total_marks)*100)); 
            printf("Your scored a total of %.2f percentage \n",(((m1+m2+m3)/(total_marks*3))*100));
        }
        else {
            printf("\nSorry, you Failed\n");
            printf("Your scored %.2f percentage in subject 1 \n",((m1/total_marks)*100));
            printf("Your scored %.2f percentage in subject 2 \n", ((m2/total_marks)*100));
            printf("Your scored %.2f percentage in subject 3 \n",((m3/total_marks)*100)); 
            printf("Your scored a total of %.2f percentage \n",(((m1+m2+m3)/(total_marks*3))*100));
        }
    }
    else {
        printf("\nSorry, you Failed\n");
        printf("Your scored %.2f percentage in subject 1 \n",((m1/total_marks)*100));
        printf("Your scored %.2f percentage in subject 2 \n", ((m2/total_marks)*100));
        printf("Your scored %.2f percentage in subject 3 \n",((m3/total_marks)*100)); 
        printf("Your scored a total of %.2f percentage \n",(((m1+m2+m3)/(total_marks*3))*100));
    }

    printf("\n");
    return 0;
}