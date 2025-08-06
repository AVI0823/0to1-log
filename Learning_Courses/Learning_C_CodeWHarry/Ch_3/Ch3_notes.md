# Chapter 3
Conditional Instructions

---
Decision making in C :
- if-else statement,
- switch statement.
## 1. if-else Statement

#### ⟫ Relational Operator
The operator that builds a relations between two values.
- == (equals to) : checks if two values are equal or not,
- != (not equals to) : checks if two values are not equal,
- > (greater then) : checks if first values is greater then second or not,
- < (less then) : checks if first values is smaller then second or not,
- >= (greater then or equals to) : checks if first values is greater then or equals to second or not,
- <= (less then or equal to) : checks if first values is smaller then or equals to second or not.
#### ⟫ Logical Operators
The operators that gives logic to our code : "AND" `&&` ,"OR" `||` ,"NOT" `!`
- `&&` (AND) -> ==true== when both the conditions are true:
	1. $1\,and\,0$ is evaluated as ==false==,
	2. $0\,and\,0$ is evaluated as ==false==,
	3. $1\,and\,1$ is evaluated as ==true==.
- `||` (OR) -> ==true== when at least one of the condition is true:
	1. $1\,and\,0$ is evaluated as ==true==,
	2. $0\,and\,0$ is evaluated as ==false==,
	3. $1\,and\,1$ is evaluated as ==true==.
- `!` (NOT) -> return ==true== if given false and ==false== if given true.
	1. `!(3==3) -> evaluated to false`,
	2. `!(3>30) -> evaluated to true`.
#### ⟫ Operators Precedence

|   Priority   | Operator    |
| :----------: | ----------- |
|   $1^{st}$   | `!`         |
| $2^{nd}$<br> | `* / %`     |
| $3^{rd}$<br> | `+ -`       |
| $4^{th}$<br> | `< > <= >=` |
| $5^{th}$<br> | `!= == `    |
| $6^{th}$<br> | `&&`        |
| $7^{th}$<br> | \|\|        |


### a) if Statement
the syntax of if statement :
```
if (condition to be checked){
	// statements if the condition is true;
}
```
we can write a single if or even a multiple if condition in a code.
```
if (condition 1 to be checked){
	// statements if the condition is true;
}
if (condition 2 to be checked){
	// statements if the condition is true;
}
if (condition 3 to be checked){
	// statements if the condition is true;
}
```
*Example :*
```c
#include <stdio.h>

int main(){
	printf("\n");

	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if (age>10){
		printf("Your age is greater then 10 \n");
	}
	if (age%2 != 0){
		printf("Your age is a odd number \n");
	}

	printf("\n");
	return 0;
}
```

### b) if-else Statement
the syntax of if-else statement :
```
if (condition to be checked){
	// statements if the condition is true;
}else{
	// statement if the condition is false;
}
```
*Example :*
```c
#include <stdio.h>

int main(){
	printf("\n");

	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if (age>10){
		printf("Your age is greater then 10 \n");
	}
	else{
		printf("Your age is smaller then 10 \n");
	}
	if (age%2 != 0){
        printf("Your age is a odd number \n");
     }
     else{
		printf("Your age is an even number \n");
	}

	printf("\n");
	return 0;
}
```

### c) else-if Statement
the syntax of if-else statement :
```
if (condition to be checked){
	// statements if the condition is true;
}
else if (condition to be checked){
	// statement if the above conditions are false;
}
else{
	// statement if all the condition are false;
}
```
*Example :*
```c
#include <stdio.h>

int main(){
	print("\n");

	int age;
	printf("Enter your age : ");
	scanf("%d",&age);

	if (age>60){ // First this condition is checked,
	// if this is true the code inside the if gets executed and the ladder ends, 
	// if condition not true then the cursor moves to the secound condtion.
		printf("You are a senior citizen, you can dirve \n");
	}
	else if (age>30){ // Then this condition is checked,
	// if this is true the code inside the if gets executed and the ladder ends, 
	// if condition not true then the cursor moves to the third condtion.
		printf("You are an adult, you can dirve \n");
	}
	else if (age>18){  // Then this condition is checked, 
	// if this is true the code inside the if gets executed and the ladder ends, 
	// if condition not true then the cursor moves to the fourth condtion.
		printf("You are young, you can dirve \n");
	}
	else{ // if no condition is true, this is executed and the ladder ends.
		printf("You cannot drive \n");
	}
	
	print("\n");
	return 0;
}
```

Programs where there are `if` and `else if` and `else` : such codes are called `if else if else ladder`
### d) Ternary Operator
Syntax for a ternary operator :
```
condition ? expression-if-true : expression-if-false
```
*Example :*
```c
#include <stdio.h>

int main(){
	printf("\n");

	int a = 2354;
	int b = 23;
	//condition ? expression-if-true : expression-if-false
	a>b ? printf("a is greater") : printf("b is greater");

	printf("\n");
	return 0;
}
```

### ⟫ Format Note :
when there is **ONLY** one statement inside `if , else if , else` it can we written without the use of `{ }`
*Example :*
```
int a = 10;
if (a=11)
	printf("I am in 11");
else
	printf("I am not in 11");
```
The above code is same as :
```
int a = 10;
if (a=11){
	printf("I am in 11");
}
else {
	printf("I am not in 11");
}
```

### e) Switch Case Control Instruction
Switch-case is used when we have to make a choice between number of alternatives for a given variable.

***Default ==switch== clause***
```c
#include <stdio.h>

int main(){
    printf("\n");
    
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    switch(a){
        default:
            printf("Nothing matched"); // if nothing mached then this is executed
        case 1 :
            printf("You entered 1 \n"); // if case 1 matched -> case 1 and all the below cases will be executed
        case 2 :
            printf("You entered 2 \n"); // if case 2 matched -> case 2 and all the below cases will be executed
        case 3 :
            printf("You entered 3 \n"); // if case 3 matched -> case 3 and all the below cases will be executed
        case 4 :
            printf("You entered 4 \n"); // if case 4 matched -> case 4 and all the below cases will be executed
    }

    printf("\n");
    return 0;
}
```

***Use of ==break== in switch***
```c
#include <stdio.h>

int main(){
    printf("\n");

    int a;
    printf("Enter a : ");
    scanf("%d",&a);
  
    switch(a){
        default:
            printf("Nothing matched"); // if case nothing matched -> default is executed and the switch break
            break; // Not really needed with default but why not
        case 1 :
            printf("You entered 1 \n"); // if case 1 matched -> case 1 is executed and the switch break
            break;
        case 2 :
            printf("You entered 2 \n"); // if case 2 matched -> case 2 is executed and the switch break
            break;
        case 3 :
            printf("You entered 3 \n"); // if case 3 matched -> case 3 is executed and the switch break
            break;
        case 4 :
            printf("You entered 4 \n"); // if case 4 matched -> case 4 is executed and the switch break
            break;
    }

    printf("\n");
    return 0;
}
```

**Some Important Notes about SWITCH**
- We can use switch case statement in any order of our need.
- `chr` values are also allowed in case.
- A switch can occur within another switch (nested switch).
### ⟫ Write a program to give grades to students based on their marks
```c
#include <stdio.h>

int main(){
    printf("\n");

    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if (marks>=90){
        printf("Grade A");
    }
    else if (marks>=80){
        printf("Grade B");
    }
    else if (marks>=70){
        printf("Grade C");
    }
    else if (marks>=60){
        printf("Grade D");
    }
    else if (marks>=50){
        printf("Grade E");
    }
    else{
        printf("Failed");
    }

    printf("\n");
    return 0;
}
```

### ⟫ In C a non-zero value is considered to be true 
```c
void checking_if(){
	if (i){
		printf("This if is executed!\n");
	}
	if (69){
		printf("This if is also executed!\n");
	}
	if (6.9){
		printf("This if is also executed!\n");
	}
	if ('a'){
		printf("This if is also executed!\n");
	}
	if (0){
		printf("This if is not executed!\n");
	}
}
```
