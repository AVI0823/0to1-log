#include <stdio.h>

void if_only(){
	
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if (age>10){
		printf("Your age is greater then 10 \n");
	}
	if (age%2 != 0){
		printf("Your age is a odd number \n");
    }
}

void if_else(){

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
}

void else_if_ladder(){

	int age;
	printf("Enter your age : ");
	scanf("%d",&age);

	if (age>60){ // First this condition is checked,
	// if this is true the code inside the if gets executed, if not true then the cursor moves to the secound condtion.
		printf("You are a senior citizen, you can dirve \n");
	}
	else if (age>30){ // Then this condition is checked,
	// if this is true the code inside the if gets executed, if not true then the cursor moves to the third condtion.
		printf("You are an adult, you can dirve \n");
	}
	else if (age>18){  // Then this condition is checked, 
	// if this is true the code inside the if gets executed, if not true then the cursor moves to the fourth condtion.
		printf("You are young, you can dirve \n");
	}
	else{ // if nothing is true, this is executed.
		printf("You cannot drive \n");
	}
}


int main(){
    printf("\n");

    // if_only();
    // printf("\n");
    // if_else();
    // printf("\n");
    // else_if_ladder();

	printf("\n");

	int a = 2354;
	int b = 23;
	//condition ? expression-if-true : expression-if-false
	a>b ? printf("a is greater") : printf("b is greater");
    
    printf("\n");
    return 0;
}