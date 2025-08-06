# Chapter 2
Instructions & Operations

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

