
# Chapter 1 
Variables & Constants

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
