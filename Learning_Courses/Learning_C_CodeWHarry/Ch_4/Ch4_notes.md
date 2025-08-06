# Chapter 4
Loop Control Instruction

---
## 1. Loops
Used when we need to run a piece of code over and over again.
### a) Increment and Decrement Operators
In any given loop, we need to use/track/update iteration we can do this using following ways :

| Short Form | Long Form   | Meaning             |
| ---------- | ----------- | ------------------- |
| `i++`      | `i = i + 1` | i is increased by 1 |
| `i--`      | `i = i - 1` | i is decreased by 1 |

```c
// i++ prints the value of i then increments i (post increment operator)
// i++ increments the value of i then prints i (post increment operator)

void increment_test(){
	
	int i = 5; // 5
	printf("The value of i is %d \n",i);
	
	i = i + 1; // updates the value of i 5 + by adding 1 = to give 6 
	printf("The value of i is %d \n",i); // prints 6

	i++; // updates the value of i 6 + by adding 1 = to give 7
	printf("The value of i is %d \n",i); // prints 7

	++i; // adds 1 + to the value of i 7 = to give 8
	printf("The value of i is %d \n",i); // print 8

	printf("The value of i is %d \n",i++); // prints 8, then updates the value of i = 8 + 1. i = 9
	
	printf("The value of i is %d \n",i); // prints 9, so now the value of i is 9

	printf("The value of i is %d \n",++i); // adds 1 to the value of i 9 to print 10.
}

// same goes to i-- and --i
```

#### i) Compound Assignment

| Short Form | Long Form   | Meaning                    |
| ---------- | ----------- | -------------------------- |
| `i += x`   | `i = i + x` | i is increased by x        |
| `i -= x`   | `i = i - x` | i is decreased by x<br>    |
| `i *= x`   | `i = i * x` | i is multiplied by x       |
| `i /= x`   | `i = i * x` | i is divided by x          |
| `i %= x`   | `i = i * x` | i is assigned the reminder |
| `i &= x`   | `i = i * x` | bitwise AND of i and x     |

### b) Types of Loops

1. `while` loop,
2. `d0-while` loop,
3. `for` loop.

#### i) `while` loop

*Example :*
```c
#include <stdio.h>

int main(){
	int i = 0;
	while (i<4){
		printf("I am inside while \n");
		// i = i + 1; means i++;
		i++;
	}
	return 0;
}
```

***Quick Quiz Question :***
Qus) Write a program to print natural numbers from 10 to 20 when initial loop counter if initialized to 0.
```c
void quiz(){
    int i = 0;
    while (i<=20)
        if (i>=10){
            printf("The valuse of i is %d \n",i);
        }
        i++;
    }
}
```

#### ii) `do while` loop
Just a simple while loop that executes at least one time.
- `while` checks the condition and then executes the code.
- `do while` executes the code and then checks the condition.

*Example :*
```c
#include <stdio.h>

int main(){
    printf("\n");
  
    int i = 0;
    
    do{
        printf("The valuse of i is %d \n", i);
        i++;
    }while (i<4);

    printf("\n");
    return 0;
}
```

***Quick Quiz Question :***
Qus) Write a program to print first 'n' natural numbers.
```c
void n_natural_num(){

	int n = 0 , i = 1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);

	do{
		printf("%d \n",i);
		i++;
	} while (i<=n);
}
```

#### iii) `for` loop

*Syntax :*
```
for ( initialize ; test ; increment or decrement ) {
	//code;
}
```
- Initialize : setting the loop counter to an initial value.
- Test : Checking a condition.
- Increment : Updating the loop counter.

*Example :*
```c
#include <stdio.h>

int main(){
    printf("\n");
  
    int n = 6;

    for ( int i = 0 ; i < n ; i++ ) {
        printf("The value of i is %d \n",i);
    }
    
	// the compiler cursor first reaches the initialization : it initialize the value of i,
	// then it reaches the test : it looks if the value is true or false,
		// if false it terminates the for loop.
		// if true it get inside the for loop and executes the code block.
	// one the code block is executed the cursor reaches the increment or decrement : it inc or dec the value of i,
	// and the loop continues until the test is false.
	// the initialization secrion only runs once in the starting of the for loop.

    printf("\n");
    return 0;
}
```

***Quick Quiz Question :***
Qus) Write a program to print first 'n' natural numbers.
```c
void first_n_natural_num(){

	int n = 0;

	printf("Enter the value of n : "); 
	scanf("%d",&n);

	for ( int i = 1 ; i <= n ; i++ ){
		printf("The value of i is %d \n",i);
	}
}
```

##### Decrementing of for loop
A for loop that works with decreasing value of the initialization.

*Example :*
```c
#include <stdio.h>

int main(){
    printf("\n");
  
    int n = 5;

    for ( int i = 10 ; i >= n ; i-- ) {
        printf("The value of i is %d \n",i);
    }
    
    printf("\n");
    return 0;
}
```

*Important  :*
```c
void dec_for(){
  
    for ( int i = 5 ; i ; i-- ){
        printf("The value of i is %d \n",i);
    }
}

/* the output of this code will be :
5
4
3
2
1

and the code will terminate at i = 0 because loop works only for non zero values i.e. only for true values, and 0 is a false value. */
```

***Quick Quiz Question :***
Qus) Write a program to print 'n' natural numbers in reverse.
```c
void n_reverse(){

	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);

	for( n ; n>1 ; n--){
		printf("%d \n",n);
	}
}
```

## 2. Break and Continue Statement 

### a) Break Statement
The `break` statement is used to exit the loop irrespective of whether the condition is `true` or `false`

*Example :*
```c
#include <stdio.h>

int main(){
	printf("\n");
	
	for ( int i = 0 ; i < 10 ; i++){
	   if (i == 5){
            printf("The loop has been terminated as the value of i is %d \n", i);
            break;
        }
        printf("The value of i is %d \n", i);
	}
	printf("I am outside the for loop!");

	printf("\n");
	return 0;
}
```

### b) Continue Statement
The `continue` statement is used to exit a single iteration of the code. 
```c
#include <stdio.h>

int main(){
	printf("\n");
	
	for ( int i = 0 ; i < 10 ; i++){
	   if (i == 5){
            printf("The loop has been terminated as the value of i is %d \n", i);
            continue;
        }
        printf("The value of i is %d \n", i);
	}
	printf("I am outside the for loop!");

	printf("\n");
	return 0;
}
```
