# Chapter 5
Functions & Recursion

---
## 1) What is a Function?

A function is a block of code which performs a particular task.

- Function Prototype :
```c
int sum(int,int);
```

- Function Definition
```c
int sum(int x,int y){
	//printf("The sum is %d\n",x+y);
	return x+y; // the return type should be same as the type of function
}
int main(){
	int a = 1;
	int a = 2;
	int c = sum(a,b);// calling the function with argument a & b t parameter x & y
	printf("%d",c);
	return 0;
}
```

- `void` function
we use void when we don't have to work with a specific datatype
```c
void sum(int x,int y){
	printf("The sum is %d\n",x+y);
} // void function do not need any datatype in return
int main(){
	int a = 1;
	int a = 2;
	sum(a,b); // calling the function with argument a & b t parameter x & y
	return 0;
}
```

***Quiz Quiz Question***
```c
// Write a program wit functions to print gm,af,gn
#include <stdio.h>

void gm(){printf("Good Morning\n");}
void af(){printf("Good Afternoon\n");}
void gn(){printf("Good Night\n");}

int main(){
    printf("\n");

    gm();
    af();
    gn();

    printf("\n");
    return 0;
}
```

### a) Types of Functions

- Library Functions : Commonly required functions grouped together in a library file on disk,
- User defined Functions : These are functions declared and defined by the user.

### b) Value Change
The value of a variable doesn't change because of the actions done in the function with it
```c
#include <stdio.h>

int change(int a){ a = 77 ; return a;}

int main(){
    printf("\n");

    int b = 22;
    int c = change(b);
    printf("The value of b and c is %d and %d\n",b,c); // b - 22 & c - 77
    
    printf("\n");
    return 0;
}
```
The value of `b` does not change as, when we give a argument in a function it creates a copy of the object and uses it.

***Quick Quiz question***
```c
// Write a code to find the area of a give squar using library function
#include <stdio.h>
#include <math.h> // for the math purpose

int main(){
    int a = 5;
    printf("The area of the squar with side %d is : %.1f \n",a,pow(a,2));
    return 0;
}
```

## 2) Recursion

A function defined in c that can call itself is called recursive function.

*Example :*
```c
#include <stdio.h>

int factorial(int d){
    if(d==1||d==0){return(1);} // base case : ensures that the recursive function ends
    return(d*factorial(d-1));
}

int main(){
    printf("\n");

    int n = 5;
    printf("The factorial of %d is %d",n,factorial(n));
  
    printf("\n");
    return 0;
}
```
