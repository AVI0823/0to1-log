Chapter 4 - Practice Set
---
### a) Write a program to write Multiplication table of a given number

```c
#include <stdio.h>

int main(){
    printf("\n");

    int number;

    printf("Enter a number : ");
    scanf("%d",&number);

    for(int i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d \n",number,i,number*i);
    }

    printf("\n");
    return 0;
}
```

### b) Write a program to print multiplication table of 10 in reverse order

```c
#include <stdio.h>

int main(){
    printf("\n");

    for(int i = 10 ; i ; i--){
        printf("10 x %d = %d \n",i,10*i);
    }

    printf("\n");
    return 0;
}
```

### c) A `do-while` loop is executed :
1. At least once,
2. At least twice,
3. At most once.

>Ans : Option 1 : At least once

### d) What can be done using one type of loop can also be done using the other two types of loop - (t/f)?

>Ans : True

### e) Write a program to sum first ten natural numbers using while loop

```c
#include <stdio.h>
  
int main(){
    printf("\n");
  
    int i = 1 , sum = 0;
  
    while(i<=10){
        sum = sum + i;
        i++;
    }
    printf("The sum of first 10 natural numbers is : %d",sum);
  
    printf("\n");
    return 0;
}
```

### f) Write a program to sum first ten natural numbers using using `for` and `do-while` loop

```c
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
```

### g) Write a program to calculate the sum of the numbers occurring in the multiplication of 8 (from 1 to 10)

```c
#include <stdio.h>

int main(){
    printf("\n");

    int sum = 0;
    for (int i = 1 ; i<=10 ; i++){
        sum = sum + i*8;
    }
    printf("The sum of the numbers occurring in the multiplication of 8 is : %d \n",sum);

    printf("\n");
    return 0;
}
```

### h) Write  a program to calculate factorial of a given number using `for` loop

```c
#include <stdio.h>

int main(){
    printf("\n");

    int factorial = 1 ,num;

    printf("Enter the number : ");
    scanf("%d",&num);

    for (int i = num ; i>0 ; i--){
        factorial = i*factorial;
    }

    printf("The factorial of num %d is : %d \n",num,factorial);

    printf("\n");
    return 0;
}
```

### i) Write  a program to calculate factorial of a given number using `while` loop

```c
#include <stdio.h>

int main(){
    printf("\n");

    int factorial = 1 ,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int i = num;

    while(i>0){
        factorial = i*factorial;
        i--;
    }

    printf("The factorial of num %d is : %d \n",num,factorial);

    printf("\n");
    return 0;
}
```

### j) Write a program to check if the given number is prime or not using `for` loops

```c
#include <stdio.h>

int main(){
    printf("\n");

    int num;    
    printf("Enter the number : ");
    scanf("%d",&num);
    char is_prime = 'y';

    for(int i = 2 ; i<(num) ; i++){
        if((num%i)==0){
            is_prime = 'n';
        }
    }
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }
  
    printf("\n");
    return 0;
}
```

### k) Write a program to check if the given number is prime or not using `while` and `do-while` loops

```c
#include <stdio.h>

void using_while(int(num)){
    int i = 2;
    char is_prime = 'y';
    while(num>i){
        if((num%i)==0){
            is_prime = 'n';
        }
        i++;
    }
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }
}

void using_dowhile(int(num)){
    int i = 2;
    char is_prime = 'y';
    do{
        if((num%i)==0){
            is_prime = 'n';
        }
        i++;
    } while(num>i);
    if (is_prime == 'y'){
        printf("The number %d is a prime number.\n",num);
    }
    else{
        printf("The number %d is not a prime number.\n",num);
    }
}

int main(){
    printf("\n");

    int num;    
    printf("Enter the number : ");
    scanf("%d",&num);

    using_while(num);    

    using_dowhile(num);

    printf("\n");
    return 0;
}
```
