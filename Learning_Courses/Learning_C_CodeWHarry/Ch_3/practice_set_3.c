/* Calculate income tax paid by an employee as per the stabs mentioned :

|  Income Sub  | Tax |
| :----------: | :-: |
| Below 2.5 L  | NIL |
| 2.5 - 5.0 L  | 5%  |
| 5.0 - 10.0 L | 20% |
| Above 10.0 L | 30% |

*/

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