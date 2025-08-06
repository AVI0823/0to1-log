# Chapter 5 - Practice Set
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
