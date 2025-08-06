# Chapter 6
Pointers

---
## 1) Pointers

A pointer is a variable which stores the address of another variable.
`int i = 72`
here the value of `i` is stored in a address in out RAM (example) the address of `i` in RAM is `87994` 
now to store the address of `i` we will make a pointer named as `j` , here the ==address== of `j` in RAM is `87998` and it store the address of variable`i`

### a) The "Address of" `(&)` operator

The address of operator is used to obtain the address of a given variable.

- A program to find the address of a variable `i` :
```c
#include <stdio.h>
int main(){
	int i = 72;
	printf("The address of i is %p",&a);
	printf("The numeric address of i is %u",&a);
	return 0;
}
```
- Using a pointer `j` to store the address of`i` :
```c
#include <stdio.h>
int main(){
	int i = 72;
	int* j = &i; // j is a pointer pointing to i
	printf("The address of i is %p \n",&a);
	printf("The address of i is %p \n",j);
	return 0;
}
```

> [!NOTE] `%p and %u Format specifier`
> `%p` is a format specifier for the pointer variable and it return a ==hexadecimal value==
> `%u` is a format specifier for the pointer variable and it return a ==integral value==

### b) The "Value at Address" operator `(*)`

The value at address or `*` operator is used to obtain the value present at a given memory address.
```c
#include <stdio.h>
int main(){
	int i = 72;
	int* j = &i; // j is a pointer pointing to i
	printf("The address of i is : %d \n",*i); // what is at the address of i
	printf("The address of j is : %d \n",*j); // what is at the address of j
	printf("The value at address i is : %d \n",*(&i)); // what value is at the address of i // 72
	printf("The value at address j is : %d \n",*(&j)); // what value is at the address of j // 87994 (as it stores the address of i)

/* '*' and '&' cancels with eachother
*(&a) = a		
**(&a) = *a		
*(&&a) = &a		
**(&&a) = a		
***(&&a) = *a
*/

	return 0;
}
```

### c) How to declare a pointer?

We have different type of pointer for different datatypes
```c
#include <stdio.h>
int main(){
	int i = 72;
	int* j = &i; // j is a pointer pointing to integer i

	char m = 'A';
	char* n = &m; // n is a pointer pointing to character m

	float x = 6.9;
	float* y = &x; // x is a pointer pointing to float y
	
	return 0;
}
```

### d) Pointer to Pointer


```c
#include <stdio.h>
int main(){
	int i = 72;
	int* j = &i; // j is a pointer pointing to integer i
	int** k = &j; // k is a pointer to a pointer j pointing to integer i

	printf("The value of i is %d\n",i); // prints the value of i : 72
	printf("The value of i is %d\n",*j); // prints the value of i : 72
	printf("The value of i is %d\n",**k); // prints the value of i : 72
	return 0;
}
```

## 2) Types of Function Call

Based on the way we pass arguments to the function, function calls are of two types :
- Call by value -> Sending the values of arguments,
- Call by reference -> Sending the address of arguments.

### a) Call by Value

```c
#include <stdio.h>
int sum(int a, int b){
	a = 6;
	return (a+b);
}

int main(){
	int x = 1, y = 6;
	printf("The sum of 1 and 6 is %d \n",sum(x,y)); 
	// here the copies of x and y are passed as arguements for the funtion sum()
	printf("The value of x after being used in function : %d",x);
	// as the copies are being sent in the function, so the function can't change the value of x and y
	retunr 0;
}
```

### b) Call by Reference

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

### c) Examples :

- Swapping the values of variable :
```c
#include <stdio.h>

void swap(int* x, int* y){ // accessing the value at a using the address of a given by the arguments
	int temp;
	temp = *x; // manipulating the values at the given address
	*x = *y; // manipulating the values at the given address
	*y = temp; // manipulating the values at the given address
}
int main(){
	int a = 3;
	int b = 4;
	swap(&a,&b); //  giving the function the access of address of a and b
	printf("%d and %d \n",a,b);
	return 0;
}
```
