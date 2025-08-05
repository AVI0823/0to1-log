// Write a function to calculate force of attraction on a body of mass `m` exerted by earth, Consider $g = 9.8m/s^2$

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