Chapter 3 - Practice Set
---
### a) What will be the output of the following code ?
```
int a = 10;
if (a = 11)
	printf("I am in 11");
else
	printf("I am not in 11");
```
-> Output :`I am in 11`
-> Explanation :
	In line 2 inside the if clause we are assigning the value of a = 11, the if accepts it and returns true : and runs the statement inside the if clause.
	The else clause would have been executed if the statement was false; i.e. if the code was -> in line 2 `if (a == 11)`

### b) Write a program to determine whether the student has passed or failed. To pass a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks input from the user.
```c
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
```

### c) Calculate income tax paid by an employee as per the stabs mentioned :

|  Income Sub  | Tax |
| :----------: | :-: |
| Below 2.5 L  | NIL |
| 2.5 - 5.0 L  | 5%  |
| 5.0 - 10.0 L | 20% |
| Above 10.0 L | 30% |
```c
#include <stdio.h>
  
int main(){
    printf("\n");
  
    int annual_income;
    printf("Enter your annual income in Rs : ");
    scanf("%i",&annual_income);
      
    if (annual_income <= 250000){
        printf("No tax for annual income below 2,50,000 Rs \n");
    }
    else if (annual_income <= 500000){
        printf("The tax amount you need to pay is : %.2f Rs \n", ((annual_income-250000)*0.05));
    }
    else if (annual_income <= 1000000){
        printf("The tax amount you need to pay is : %.2f Rs \n", (((250000*0.05) + ((annual_income-500000)*0.20))));
    }
    else if (annual_income > 1000000){
        printf("The tax amount you need to pay is : %.2f Rs \n", ((250000*0.05) + (500000*0.20) + ((annual_income-1000000)*0.30)));
    }
  
    printf("\n");
    return 0;
}
```

### d) Write a program to find whether the input year is leap year or not
The condition of a leap year is that the year should be divisible by 4 but not by 100 or divisible by 400.
```c
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
```

### e) Write a program to determine whether a character entered by the user is lower case or not using ASCII
The ASCII value of lowercase characters range from 97 to 122.
```c
#include <stdio.h>

int main(){
    printf("\n");

    // chr ch = 'a';
    // printf("The character is %c",ch);
    // printf("The ASCII value of character is %d",ch);

    char word;
    printf("Enter a character : ");
    scanf("%c",&word);

    (("%d",word)>=97 && ("%d",word)<=122) ? printf("The entered character is lower case") : printf("The entered character is not lower case");

    printf("\n");
    return 0;
}
```

### f) Write a program to find the greatest of four numbers entered by the user 
```c
#include <stdio.h>
  
int main(){
    printf("\n");
  
    int n1,n2,n3,n4;
  
    printf("Enter n1 : ");
    scanf("%d",&n1);    
    printf("Enter n2 : ");
    scanf("%d",&n2);
    printf("Enter n3 : ");
    scanf("%d",&n3);
    printf("Enter n4 : ");
    scanf("%d",&n4);
  
    int greatest = n1;
  
    if (n2>greatest){
        greatest = n2;
    }
    if (n3>greatest){
        greatest = n3;
    }
    if (n4>greatest){
        greatest = n4;
    }
    printf("greatest number of all four is : %d \n",greatest);
  
    printf("\n");
    return 0;
}
```
---
