
# Chapter 0 
Introduction

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
