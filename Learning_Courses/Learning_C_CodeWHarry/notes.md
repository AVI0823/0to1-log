
---
# $$ \texttt{ C language } $$
Date : 10/07/2025 to _End DATE_
Status : In progress
Resource :  

---
# $$ \texttt{———— Chapter 0 ————} $$
$$\texttt{Introduction}$$

---
### 1. Example code :

```c
#include<stdio.h> // Header file → Preprocessor directive 
//includes the funtions required by the compiler to comper the code.

int main(){ 

    // int , tells us that the return value of a function is an integer 
    // main() is a funtion
    // {...} represent the start and end of the function

    printf("Hello World"); // printf = print the thing

    // anything inside "..." is a string

    return 0; // return = the end of function and return the value 0
}
```

> **Comments** :

Piece of code that is not executed and are ignored by the compiler.

- Single line comments

```c
anything after // is a comment for 1 line
```

- Multi line comments

```c
/*
... anything inside /* and */ is a comment
*/
```

### 2. Boilerplate code :

A code structure u need to write in every program.

```c
#include <DIRECTIVE>
int main(){
  // body of code;
  return 0;
}
```

- **Basic structure of a C program** :

1. Every program’s execution starts from main() function.
2. All the statements are terminated with a semicolon.
3. Instructions are Case-Sensitive.
4. Instructions are executed in the same order in which they are written.

## 3. Escape Sequence Characters

Combination of characters that starts with a backslash(\) followed by a character. They represent special character in a string or character constant.

### a) New Line

\n in the code tells the compiler to “enter into next line” in the output of the code.

```c
#include <stdio.h>
int main(){
  printf("\\n Hello World! \\n");
  return 0;
}
```

### b) Tab

\t in the code tells the compiler to give a “tab space” in the output of the code.

```c
#include <stdio.h>
int main(){
  printf("Hello \\t World!");
  return 0;
}
```

### c) Single quote

\’ in the code tells the compiler to print a ‘ in the output of the code.

```c
#include <stdio.h>
int main(){
  printf("I said \\' Hello World! \\' ");
  return 0;
}
```

### d) Double quote

\” in the code tells the compiler to print a “ in the output of the code.

```c
#include <stdio.h>
int main(){
  printf("I said \\" Hello World! \\" ");
  return 0;
}
```

### e) Backslash

\\ in the code tells the compiler to print a \ in the output of the code.

```c
#include <stdio.h>
int main(){
  printf("Code files are in C:\\\\code_work\\\\c_language");
  return 0;
}
```

---
# $$ \texttt{—— Chapter 1 ——} $$
$$\texttt{Variables \& Constants}$$

---
## 1. Variables

An entity whose value can be changes and it stores the value simply. (before giving the value we need to declare the type of variable)

```c
int a; // variable declaration (int means integer)
a = 6; // stores the value(6) in variable(a) as datatype(int)
```

```c
int a = 1; // it works the same
```

### a) Printing Variables

During the printing we need to declare the variable type using “%…” in printf function.

```c
printf("%d", a); // %d tells the printf funtion that the upcoming variable is an integer

// we can also write text in printf function
printf("The output of this program is %d", a); 
```

- Full Code :

```c
#include <stdio.h>
int main(){
    int a; 
    a = 6; 
    printf("The output of this program is %d", a); 
    return 0;
}
```

### b) Rules for naming variables in c :

1. First character must be and alphabet or underscore( _ )
2. No commas, blanks are allowed
3. No special symbols other than ( _ ) are allowed
4. Variable are case sensitive

### b) Keywords :

Words whose meaning is already know to the compiler, you cannot use them to make variables

There are 32 keywords in c :

|No.|Keyword|Description|
|---|---|---|
|1|`auto`|Declares automatic storage duration|
|2|`break`|Exits from loops or switch statements|
|3|`case`|Defines a branch in a `switch` statement|
|4|`char`|Declares a character variable|
|5|`const`|Declares a constant value|
|6|`continue`|Skips the rest of the loop and starts next iteration|
|7|`default`|Specifies default case in a `switch`|
|8|`do`|Starts a `do-while` loop|
|9|`double`|Declares a double-precision float|
|10|`else`|Specifies the alternative in an `if` statement|
|11|`enum`|Declares an enumeration|
|12|`extern`|Declares a variable or function defined elsewhere|
|13|`float`|Declares a floating-point variable|
|14|`for`|Starts a `for` loop|
|15|`goto`|Jumps to a labeled statement|
|16|`if`|Starts a conditional statement|
|17|`int`|Declares an integer variable|
|18|`long`|Declares a long integer|
|19|`register`|Requests storage in a CPU register|
|20|`return`|Returns from a function|
|21|`short`|Declares a short integer|
|22|`signed`|Declares a signed variable|
|23|`sizeof`|Returns the size of a data type or object|
|24|`static`|Declares a static variable or function|
|25|`struct`|Declares a structure|
|26|`switch`|Starts a multi-way branch|
|27|`typedef`|Creates a new data type name|
|28|`union`|Declares a union|
|29|`unsigned`|Declares an unsigned variable|
|30|`void`|Specifies no type or no return value|
|31|`volatile`|Prevents compiler optimization on a variable|
|32|`while`|Starts a `while` loop|

---

## 2. Constants

An entity whose value dose not change is called as a constant.

- **Type of Constants** :

1. Integer constant → 1 , 2 , 3 , 4 , 5 , …
2. Real constant → 322.1 , 2.5 , 7.0 , …
3. Character constant → ‘a’ , ‘b’ , ‘$’ , ‘@’ , ... (must be enclosed within single inverted commas)

### a) Datatypes

Storage type in a code.

- **Types of Datatype**

```c
int a = 1; // int = integeral values

float b = 1.4; // float = decimal values

char c = 'a'; // char = character(string) • USE '...'
```

- **Format Specifier**

It tells that ‘I _am **EXPECTING** a specific datatype_’

```c
// %d // **Format Specifier for integer**
printf("The value of a is %d", a);

// %f // **Format Specifier for float**
printf("The value of b is %f", b);
// %.numf Gives the float output with specific numbers of num after decimal
printf("The value of b is %.3f", b); // only 3 nums after decimal

//%c // **Format Specifier for character**
printf("The value of a is %c", c);
```

- **Storage of datatypes** :

> 1 byte = 8 bits ; 1 bit is the storage where we can store either a single 1 or 0.

1. ‘int’ : 4 bytes (32 bits)
2. ‘char’ : ALWAYS 1 byte (8 bits)
3. ‘float’ : 4 bytes (32 bits)

```c
// code to find the storage of the database
int main(){
	printf("Size of int: %zu bytes\\n",sizeof(int));
	printf("Size of char: %zu bytes\\n",sizeof(char));
	printf("Size of float: %zu bytes\\n",sizeof(float));
	return 0;
}
```

---

## 3. Library Functions

Libraries in C are used to carry out certain tasks, respective `header’ files are needed to run the functions.

|Function|Header File|Description / Use Case|Example|
|---|---|---|---|
|`printf()`|`stdio.h`|Prints formatted output to the screen|`printf("Hello, %d", x);`|
|`scanf()`|`stdio.h`|Reads formatted input from the user|`scanf("%d", &x);`|
|`strlen()`|`string.h`|Returns length of a string|`strlen("hello") → 5`|
|`strcpy()`|`string.h`|Copies one string into another|`strcpy(dest, src);`|
|`strcat()`|`string.h`|Appends one string to another|`strcat(s1, s2);`|
|`strcmp()`|`string.h`|Compares two strings|`strcmp("a", "b")` → `-1`|
|`malloc()`|`stdlib.h`|Allocates dynamic memory|`malloc(10 * sizeof(int));`|
|`free()`|`stdlib.h`|Frees dynamically allocated memory|`free(ptr);`|
|`exit()`|`stdlib.h`|Terminates the program|`exit(0);`|
|`abs()`|`stdlib.h`|Returns absolute value of an integer|`abs(-3)` → `3`|
|`pow()`|`math.h`|Raises a number to a power|`pow(2, 3)` → `8.0`|
|`sqrt()`|`math.h`|Returns square root of a number|`sqrt(16)` → `4.0`|
|`ceil()`|`math.h`|Rounds a float up|`ceil(3.2)` → `4.0`|
|`floor()`|`math.h`|Rounds a float down|`floor(3.9)` → `3.0`|
|`fopen()`|`stdio.h`|Opens a file|`fopen("data.txt", "r");`|
|`fclose()`|`stdio.h`|Closes a file|`fclose(fp);`|
|`fgets()`|`stdio.h`|Reads a line from a file or input|`fgets(buf, 100, stdin);`|

---

## 4. Taking Input from User

```c
#include <stdio.h>

int main() {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a); // Read an integer from the user and store it at the memory address of variable a.
	// scanf("Format Specifier" , address of variable)
	// scanf("%d", ...) : means -> It tells the scanf function "I am EXPECTING the user to type an integer"
	// scanf("...", &a) : means -> It tells the scanf function where to store the input (in this case, store in a)
	printf("The value of a is %d", a);
	// %d tells the printf function that we need to print a integer (in our case its a)
	return 0;
}
```

> Syntax of scanf() function :

- scanf("Format Specifier" , address of variable)
- scanf("%d", ...) : means -> It tells the scanf function "I am EXPECTING the user to type an integer"
- scanf("...", &a) : means -> It tells the scanf function where to store the input (in this case, store in a)

---
## $$ \texttt{———— Chapter 1 - Practice Set ————} $$
---

### a) Write a C program to calculate area of a rectangle :

- Using Hard coded inputs :
```c
void hard_input(){
    int length = 10;
    int breadth = 20;
    int area_of_rectangle = (length*breadth);
    printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, area_of_rectangle);
}
```
- Using inputs supplied by the user :
```c
void user_input(){
    int length , breadth;
    printf("Enter the length of the rectangle in cm : ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle in cm : ");
    scanf("%d", &breadth);
    printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, length*breadth);
}
```
- Final code :
```c
#include <stdio.h>
    
void hard_input(){
    int length = 10;
    int breadth = 20;
    int area_of_rectangle = length*breadth;
    printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, area_of_rectangle);
}
    
void user_input(){
    int length , breadth;
    printf("Enter the length of the rectangle in cm : ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle in cm : ");
    scanf("%d", &breadth);
    printf("Area of the rectange with length %d cm breadth %d cm is = %d cm^2",length,breadth, length*breadth);
}
    
int main(){
    	
    printf("\\n");
    hard_input();
    printf("\\n");
    
    printf("\\n");
    user_input();
    printf("\\n");
    
    return 0;
}
```
### b) Write a C program to calculate the area of a circle , and modify the same code to calculate the volume of a cylinder :

```c
#include <stdio.h>

int main(){
    printf("\\n");
		
	// defining variables
    int radius,height;
    float area_of_circle, volume_of_cylinder;
    
    // area of circle
    printf("Enter the radius of the circle in cm : "); 
    scanf("%d", &radius);
    area_of_circle = (3.14*radius*radius);
    printf("Area of the circle with radius %d cm is %f cm^2",radius, area_of_circle);
    
    printf("\\n");
		
		// volume of cylinder
    printf("Enter the height of the circle in cm : "); 
    scanf("%d", &height);
    volume_of_cylinder = (area_of_circle*height);
    printf("Area of the circle with radius %d cm and height %d cm is %f cm^2",radius,height,volume_of_cylinder);
    
    printf("\\n");
    return 0;
}
```
### c) Write a C program to convert Celsius into Fahrenheit :

```c
#include <stdio.h>

void CtoF(float temp){
    float c = temp;
    float f;
    f = ((9.0/5.0)*c + 32);
    // We used 9.0 and 5.0 just to get the ans of the divide as a float
    // by default the C language assume it as integer which may cause unexpected output in our program
    printf("%.2f Celsius is %.2f in Fahrenheit.",c,f);
}

int main(){
    printf("\n");

    float c_temp;
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &c_temp);
    CtoF(c_temp);
 
	printf("\n");
    return 0;
}
```
### d) Write a C program to find Simple interest of set of values :

```c
#include <stdio.h>

int main(){
    printf("\n");

    float p,si;
    int r,t;
    printf("Enter the Principal Amount : ");
    scanf("%f",&p);
    printf("Enter the Rate of Intrest in percentage : ");
    scanf("%i",&r);
    printf("Enter the Time period in years : ");
    scanf("%i",&t);
    si = (p*r*t)/100;

    printf("The Simple Intrest is %.2f Rs",si);

    printf("\n");
    return 0;
}
```

---
# $$ \texttt{———— Chapter 2 ————} $$
$$\texttt{Instructions \& Operations}$$

---
## 1. Instructions

A c language is a set of instructions.
### Types of Instructions :

- Type declaration Instructions,
- Arithmetic Instructions,
- Control Instructions.
### a) Type Declaration Instructions

```c
int a;

float b;

char c;
```

Other variations : (every line is independent in the following example)
```c
1	int a; // Declare an integer variable 'a'
2	float b; // Declare an float variable 'b'
3	int i = 10; // Declare and initialize 'i' with '10'
4	int j = i; // Declare 'j' and initialize with 'i'
5	int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
6	int j1 = a + j - i; // Valid: Use previouslt defined variables

7	float b = a + 3; // Invalid 'a' is used before declaration
8	float a = 1.1; 

9	int a, b, c, d; // Valid: Assingning the same value to multiple variables
10	a = b = c = d = 30; // all equal to 30
```

### b) Arithmetic Instructions
Used to do a arithmetic operations with the code.
- + (addition)
- - (subtraction)
- * (multiplication)
- / (division)
- % (modulus)
	- return the reminder
	- cannot be applied on a float
	- sign is same as of numerator (`-5%2 = -1`)
- there is no exponential operator in c : `d = a^b` or `d = a**b` gives an error.

```c
#include <stdio.h>

int main(){
    printf("\n");

    int a = 4;
    int b = 3;

    // addition operator
    printf("The value of a is %d and value of b is %d and sume is %d \n", a,b,a+b);

    // modulus operator
    printf("The reminder when a is divided by b is : %d \n", a%b);

    printf("\n");
    return 0;
}
```
#### i) Type Conversation
An arithmetic operation between :
- int and int → int
- int and float → float
- float and float → float
**Example :**
- 5/2 becomes 2, not 2.5 (as both the operands are int)
- 5.0/2 become 2.5 (as one operand is float)
- 2/5 becomes 0 (as both operands are int)

#### ii) Type Compatibility
The datatype given will change the constant to itself.
- `int a = 3.5`, the `3.5` will be converted to `3` as the datatype given is `int`
- `float a = 8`, the `8` will be converted to `8.0` as the datatype given is `float`
```c
// manual typecasting :
#include <stdio.h>

int main(){
	int n = 45;
	float m = 32.23;

	n = (int) m; // convert the datatype to int
	printf("%d \n",n);
	
	return 0;
}
```
#### iii) Operator Precedence & Associativity
Operators of higher priority are evaluated first in the *absence of parenthesis* .Use parenthesis ( ) to control the precedence in code.

| Priority | Operator |
| :------: | :------: |
| $1^{st}$ | `* / %`  |
| $2^{nd}$ |  `+ -`   |
| $3^{rd}$ |   `=`    |
When the operators of equal priority are present in an expression.`* , / , %` operators follow ***LEFT to RIGHT*** associativity. 

```c
# include <stdio.h>

int main(){
	print("\n");

	printf("The value of 3*6/9+7 is %d",3*6/9+7); 
	/* -> 
	(((3*6)/9)+7) 
	(((18)/9)+7) 
	(((2))+7) 
	(((9)))
	so the output is 9 */
	printf("The value of 3*6/2*9+7*3 is %d",3*6/2*9+7*3); 
	/* -> 
	((((3*6)/2)*9)+(7*3))
	((((18)/2)*9)+(7*3))
	((((9))*9)+(7*3))
	((((81)))+(7*3))
	((((81)))+(21))
	((((102))))
	so the output is 102 */

	print("\n");
	return 0;
}
```
**Use parenthesis (), ALWAYS**

### c) Control Instructions
Determine the flow of control in a program four types f=of control instructions in C are:
- Sequence Control instructions
- Decision Control instructions
- Loop Control instructions
- Case Control instructions


---
## $$ \texttt{———— Chapter 2 - Practice Set ————} $$
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

---
# $$ \texttt{———— Chapter 3 ————} $$
$$\texttt{Conditional Instructions}$$

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
---
## $$ \texttt{———— Chapter 3 - Practice Set ————} $$
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
# $$ \texttt{———— Chapter 4 ————} $$
$$\texttt{Loop Control Instruction}$$

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

---
## $$ \texttt{———— Chapter 4 - Practice Set ————} $$
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

---
# $$ \texttt{———— Project 1 ————} $$
$$\texttt{Number Guessing Game}$$

---
## We need a program that generates a random number and asks the user to guess it, if the user's guess is higher then the actual number the program displays "Lower number please", and if the user's guess is lower then the actual number the program displays "Higher number please"
## When the user guesses the correct number, the program displays the number of attempts the user took to reach at the number.

```c
#include <stdio.h>
#include <stdlib.h> // to generate a random number
#include <time.h> // to generate a random number

int main(){
    printf("\n");

    // to generate random num (no clue how it works)
    srand(time(0));
    int randomNumber = ((rand()%100)+1);
    //printf("%d",randomNumber);
    // to generate random num (no clue how it works)

    printf("\nWelcome to GUESS THE NUMBER game \n");
    printf("The computer has choosen a random number between 1 and 100\n");
    printf("And you need to guess it \n");
    printf("Hints will be given throught the Game...\n");
    printf("So Let's Start\n");
  
    int guess_count = 0;
    int tracker = 1;

    while(tracker==1){
        int guess_number;
        printf("\nEnter your guess : ");
        scanf("%d",&guess_number);
  
        if((guess_number)>randomNumber){
            guess_count++;
            if((guess_number-20)>randomNumber){
                printf("Nooo! You are way too off, Lower number please\n");
                continue;
            }
            if((guess_number-5)>=randomNumber ){
                printf("Almost there , Lower number please\n");
                continue;
            }
            else{
                printf("You are very close, Lower number please\n");
            }
        }
        if((guess_number)<randomNumber){
            guess_count++;
            if((guess_number+20)<randomNumber){
                printf("Nooo! You are way too off, Higher number please\n");
                continue;
            }
            if((guess_number+5)<=randomNumber){
                printf("Almost there , Higher number please\n");
                continue;
            }
            else{
                printf("You are very close, Higher number please\n");
            }
        }
        if(guess_number == randomNumber){
            guess_count++;
            tracker = 0;
            printf("\nYou Guessed it, The real number was : %d \n",guess_number);
            printf("It took you %d attempts to guess the number \n",guess_count);
        }
    }
  
    printf("\n");
    return 0;
}
```

---
# $$ \texttt{———— Chapter 5 ————} $$
$$\texttt{Functions \& Recursion}$$

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

---
## $$ \texttt{———— Chapter 5 - Practice Set ————} $$
---
### a) Write a program using function to find average of three numbers

```c
#include <stdio.h>

float three_avg(int num1,int num2,int num3){
    return((num1+num2+num3)/3.0);
}

int main(){
    printf("\n");

    int x,y,z;
    printf("Enter the value of num1 : ");
    scanf("%d",&x);
    printf("Enter the value of num2 : ");
    scanf("%d",&y);
    printf("Enter the value of num3 : ");
    scanf("%d",&z);
    printf("The avg of numbers %d, %d and %d is : %.2f \n",x,y,z,three_avg(x,y,z));
  
    printf("\n");
    return 0;
}
```

### b) Write a function to convert Celsius temperature into Fahrenheit

```c
#include <stdio.h>

float c_to_f(float num){
    float f = (((9.0/5.0)*num)+32);
    return(f);
}

int main(){
    printf("\n");

    float temp;
    printf("Enter the temperature in Celsius : ");
    scanf("%f",&temp);
    printf("The value of %.1f degree Celsius is : %.1f Fahrenheit\n",temp,c_to_f(temp));

    printf("\n");
    return 0;
}
```

### c) Write a function to calculate force of attraction on a body of mass `m` exerted by earth, Consider $g = 9.8m/s^2$

```c
#include <stdio.h>

float force(int mass){
    return(mass*9.8);
}

int main(){
    printf("\n");

    int mass;
    printf("Enter the mass of the body : ");
    scanf("%d",&mass);

    printf("The value of body with mass %d is %.1f N\n",mass,force(mass));

    printf("\n");
    return 0;
}
```

### d) Write a program using recursion to calculate $n^{th}$ element of Fibonacci Series

```c
#include <stdio.h>

int fibonacci(int num){
    // 1,1,2,3,5,8,13,21,...
    if(num==0){return(0);}
    else if(num==1){return(1);}
    else{
        return(fibonacci(num-1) + fibonacci(num-2));
    }
}

int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The %dth term in fibonachi is : %d",n,fibonacci(n));

    printf("\n");
    return 0;
}
```

### e) What will the following line give output :
```c
int a = 4;
pritnf("%d %d %d \n",a,++a,a++);
```
> Ans : `6 6 4`
> Reason : when there is a same variable the compiler moves from right to left,
> `a , ++a , a++`
> `a , ++a, 4` (now the value of a is 4++ which is 5)
> `a , 6 , 4` (as the value of a was 5 so now after ++a  which means ++5 the value of a is 6)
> `6 , 6 , 4` (the value of a is 6 (as it changed during ++a))

### f) Write a recursive function to calculate the sum of first "n" natural numbers

```c
#include <stdio.h>

int sum_n(int num){
    if(num==1){return 1;}
    int sum = 0;
    return(sum_n(num-1)+num);
}
  
int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of first %d numbers is : %d",n,sum_n(n));

    printf("\n");
    return 0;
}
```

### g) Write a program using function to print the following pattern(first n lines)
`*`

`* * *`

`* * * * *`

```c
#include <stdio.h>

void print_pattern(int num){
    char element = '*';
    for(int i = 1; i<num ;i++){
        if(i%2==0){printf("\n\n");}
        else if(i%2!=0){
            for(int j = 1 ;j<=i;j++){    
                printf(" * ");
            }
        }
    }
}
  
int main(){
    printf("\n");

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print_pattern(n);
  
    printf("\n");
    return 0;
}
```

---
# $$ \texttt{———— Chapter 6 ————} $$
$$\texttt{Pointers}$$

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

---
## $$ \texttt{———— Chapter 6 - Practice Set ————} $$
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

---
# $$ \texttt{———— Chapter 7 ————} $$
$$\texttt{Arrays}$$

---
## 1) Arrays

Array is a collection of similar elements, Array allows a single variable to store multiple values.

*Syntax :*
```c
int marks[90]; // we are telling the compiler to be ready for 90 integral values in marks variable
char name[50]; // we are telling the compiler to be ready for 50 character values in marks variable
float percentile[90]; // we are telling the compiler to be ready for 90 float values in marks variable
```
- Values can be then assigned to make array like this :
```c
int marks[90];
mark[0] = 35;
mark[1] = 45;
// we start from 0 and can go till 89 (0-89 : 90 elements : the max we requested during initialization)
```
The ==index== of any array goes from `0 to n-1`

![[Drawing 2025-07-30 15.46.43.excalidraw]]
*Example :*
```c
#include <stdio.h>

int main(){
	int marks[90]; // we are telling the compiler to be ready for 90 integral values in marks variable

	marks[0] = 45;
	marks[1] = 95;

	printf("Marks 0 and 1 value is : %d  and %d ", marks[0],marks[1]);
	return 0;
}
```

### a) Example to take value from user :
```c
#include <stdio.h>
int main(){
    printf("\n");
    int marks[90]; // we are telling the compiler to be ready for 90 integral values in marks variable
    int num_of_std;
    printf("Enter the numbers of student data u want to insert in the array : ");
    scanf("%d",&num_of_std);

    int i = 0;

    do{
        printf("Enter the numbers of student %d : ",i+1);
        scanf("%d",&marks[i]);
        i++;
    } while(i<num_of_std);

    printf("\n");

    for(int i = 0 ; i<num_of_std ;  i++){
        printf("The numbers of student %d : %d \n",i+1,marks[i]);
    }

    printf("\n");
    return 0;
}
```

### b) Initialization of an Array
There are many ways in which an array can be initialized.

```c
int cgpa[3] = {9,8,8}; // it will make a array of 3 values for the given values
// we don't even need to request the storage for amount of numbers, while directly giving the values,
// c can automatically count and asign values to the indexes of the array
float marks[] = {33.1,35.5}
```
### c) Arrays in Memory

When we make an array :
```c
int arr[3] = {1,2,3}
```
If we assume that each integer takes up 4 bytes of memory
Memories will be distributed this way : (1 int = 4 bytes assuming)

| value in array :  |   1   |   2   |   3   |
| ----------------- | :---: | :---: | :---: |
| memory location : | 65234 | 65238 | 65242 |
### d) Pointer Arithmetic

The arithmetic operations on a pointer heavily depends on the type of pointer :
```c
#include <stdio.h>

int main(){

    // using a integer pointer
    int a = 5;
    int* a_ptr = &a;
    printf("The address of a is %u \n",&a);
    printf("The address of a is %u \n",a_ptr);
    a_ptr++; // inc 4 bytes (as 1 integer = 4 bytes)
    printf("The address of a is %u \n",a_ptr);

    // using a character pointer    
    char b = 'A';
    char* b_ptr = &b;
    printf("The address of b is %u \n",&b);
    printf("The address of b is %u \n",b_ptr);
    b_ptr++; // inc 1 byte (as 1 character = 1 byte)
    printf("The address of b is %u \n",b_ptr);

    return 0;
}
```

Following operations can be performed on a pointer :
1. Addition of a number to a pointer,
2. Subtraction of a number to a pointer,
3. Subtraction of one pointer from pointer,
4. Comparison of two pointer variables.
### e) Accessing Array using Pointers

```c
#include <stdio.h>
int main(){
    printf("\n");
    int marks[90]; // we are telling the compiler to be ready for 90 integral values in marks variable
    int num_of_std;
    printf("Enter the numbers of student data u want to insert in the array : ");
    scanf("%d",&num_of_std);
    int i = 0;
    do{
        printf("Enter the numbers of student %d : ",i+1);
        scanf("%d",&marks[i]);
        i++;
    } while(i<num_of_std);
    printf("\n");
    for(int i = 0 ; i<num_of_std ;  i++){

        printf("The address of numbers of student at index %d is : %d \n",i+1,&marks[i]);
        // This shows us that the values in array are continuous blocks in memory

    }
    printf("\n");
    return 0;
}
```

Which means :
if pointer ==ptr== points to index 0, 
the ==ptr++== will points to index 1, 

```c
#include <stdio.h>

int main(){
    printf("\n");

    int marks[] = {12,34,54,23};
    // int* prt = &marks[0];
    int* ptr = marks; // same as int* prt = &marks[0];
    for(int i = 0 ; i<4 ; i++){
        //printf("The marks at index %d is %d \n",i,marks[i]);
        printf("The marks at index %d is %d \n",i,*ptr);
        ptr++; // here the pointer just iterates in loop
    }

    printf("\n");
    return 0;
}
```
### f) Passing Array to Function

Array can be passed to the functions using two variations :
```c
void printArray(int *i, int n);
//or
void printArray(int i[], int n);
```

## 2) Multidimension Arrays

An array can be of 2 dimensions/3 dimensions/n dimensions.

A 2 dimensions array can be defined like this :
```c
int arr2D[3][2] = {{1,4}{7,9}{11,12}}
```
We can access the elements of a 2D array :
```c
#include <stdio.h>

int main(){
    printf("\n");

    int arr2D[3][2] = {{1,4},{7,9},{11,12}};
    printf("%d \n",arr2D[0][0]);
    printf("%d \n",arr2D[0][1]);
    printf("%d \n",arr2D[1][0]);
    printf("%d \n",arr2D[1][1]);
    printf("%d \n",arr2D[2][0]);

    printf("\n");
    return 0;
}
```
### a) 2D Arrays in Memory

A 2D arrays like a 1D array in stored in contiguous memory blocks

| value in array :  |   1   |   2   |   3   |
| ----------------- | :---: | :---: | :---: |
| memory location : | 65234 | 65238 | 65242 |
