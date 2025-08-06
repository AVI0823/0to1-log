# Chapter 2 - Practice Set
---
### a) Which of the following is invalid in C?
	a) int n = 1; int b = a;
	b) int v = 3*3;
	c) chr d = '1 Jan 2000'
-> Ans) ==Option c== is incorrect, as chr only holds 1 character by default.

### b) Which datatype will 3.0/8-2 return?
-> Ans) ==Float==, output :`-1.625000`

### c) Write a program to check whether a number is divisible by 97 or not.
```c
#include <stdio.h>
  
int main(){
    printf("\n");
  
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);

    if ((a%97) == 0){ // checking if the reminder is zero when we divide a from 97 (97 divided by a)
        printf("Divisible \n");
    }
    else{
        printf("Not divisible \n");
    }

    printf("\n");
    return 0;
}
```

### d) Explain step by step evaluation of `3*x/y-z+k`, where `x=2,y=3,z=3,k=1`:
```c
#include <stdio.h>

int main(){
	printf("\n");
	
	int x,y,z,k;
	x = 2;
	y = z = 3;
	k = 1;
	printf("%f",3*x/y-z+k);
	/* ((((3*x)/y)-z)+k)
	((((6)/y)-z)+k)
	((((2))-z)+k)
	((((-1)))+k)
	((((0))))
	so the output is 0.00000*/
	
	printf("\n");
	return 0;
}
```

### d) Which datatype will 3.0+1 return?
-> Ans) ==Float==, output : `4.0000`
