#include<stdio.h>
#include<math.h>

int main()
{    
    printf("Welcome to this Calculator Program \n Made by Swaroop2sky\n\n");
	// To Create a calculator using Operators 
	float num1,num2;
	printf("Enter a Number: ");
	scanf("%f",&num1);
	printf("Enter another Number: ");
	scanf("%f",&num2);
	
	//Defining Operators
    float sum, sub, multiply, quotient, remainder;
    sum=num1 + num2;
    sub=num1-num2;
    multiply=num1*num2;
    quotient=num1/num2;
    //remainder=num1%num2;
    
    printf("\nThe sum is: %f \n",sum);
    printf("The subtraction is: %f \n",sub);
    printf("The product is: %f \n",multiply);
    printf("The quotient is: %f \n",quotient);
    //printf("The remainder is: %f \n",remainder);
    return 0;
}
