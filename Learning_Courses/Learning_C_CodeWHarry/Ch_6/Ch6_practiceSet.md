# Chapter 6 - Practice Set
---
### a) Write a program to print the address of a variable, use this address to get the value of the variable

```c
#include <stdio.h>

int main(){
    printf("\n");

    int a;
    printf("Enter a number for variable a : ");
    scanf("%d",&a);
    int* b = &a;
    
    printf("The address of a is :\n%p in hexadecimal,\n%u in integer\n",&a,b);

    printf("The value at address %p is : %d\n",b,*(&a));

    printf("\n");
    return 0;
}
```

### b) Write a program having a variable `i`, print the address of `i`, pass this variable to a function and print its address. Are these address same?

```c
#include <stdio.h>

void passing_variable(int x){
    printf("The address of i in the function is : %p\n",&x);
    printf("The address of i in integer form in the function is : %u\n",&x);
}

int main(){
    printf("\n");

    int i = 5;
    printf("The address of i is : %p\n",&i);
    printf("The address of i in integer form is : %u\n",&i);
    passing_variable(i);

    printf("\n");
    return 0;
}
```
>If we want the address same :
```c
#include <stdio.h>

void passing_variable(int* x){
    int* y = x;
    printf("The address of i in the function is : %p\n",y);
    printf("The address of i in integer form in the function is : %u\n",y);
}

int main(){
    printf("\n");

    int i = 5;
    printf("The address of i is : %p\n",&i);
    printf("The address of i in integer form is : %u\n",&i);
    passing_variable(&i);

    printf("\n");
    return 0;
}
```

### c) Write a function to change the value of a variable to the tens times its original value

```c
#include <stdio.h>

void ten_times(int* num){
    *num = ((*num)*10);
}

int main(){
    printf("\n");

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("The value of x before the function is : %d\n",x);
    ten_times(&x);
    printf("The value of x after the function is : %d\n",x);

    printf("\n");
    return 0;
}
```

### d) Write a function and pass the value by reference

```c
#include <stdio.h>
int sum(int* a, int* b){ // as we are reciving the VALUES AT THE ADDRESS OF X and Y we need to use the similar datatype (adding (*))
	a = 6;
	return (*a+*b); // as we are reciving the VALUES AT THE ADDRESS OF X and Y we need to return the similar datatype (adding (*))
}

int main(){
	int x = 1, y = 6;
	printf("The sum of 1 and 6 is %d \n",sum(&x,&y)); 
	// here the ADDRESS OF X and Y is being given as a arguemnt to the function sum()
	printf("The value of x after being used in function : %d",x);
	// the VALUE OF ADDRESS OF X has been sent to the function, so the function can manipulate the value the way it wants
	retunr 0;
}
```

### e) Write a program using a function which calculates the sum and the average of two numbers, use pointers and print the values of sum and average in main()

```c
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
```

### f) Write a program to print the value of a variable `i` using the "pointer to pointe" type of variable

```c
#include <stdio.h>

int main(){
    printf("\n");

    int i = 69;
    int* pointer_for_i = &i;
    int** pointer_for_pointer_of_i = &pointer_for_i;

    printf("The value of i is : %d \n",i);
    printf("The value of i using a pointer is : %d \n",*pointer_for_i);
    printf("The value of i using the pointer to pointer is : %d \n",**pointer_for_pointer_of_i);

    printf("\n");
    return 0;
}
```

### g) Try the problem 3 using call by value and verify that it does not change the value of the said variable 

```c
#include <stdio.h>

void ten_times(int num){
    num = ((num)*10);
}

int main(){
    printf("\n");

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("The value of x before the function is : %d\n",x);
    ten_times(x);
    printf("The value of x after the function is : %d\n",x);

    printf("\n");
    return 0;
}
```
