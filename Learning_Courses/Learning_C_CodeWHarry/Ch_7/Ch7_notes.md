# Chapter 7
Arrays

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
