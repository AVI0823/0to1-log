Chapter 1 - Practice Set
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
