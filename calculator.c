/* This program is a simple calculator that computes all four basic arithmetic operations */
#include<stdio.h>
/* Starting off with creating functions for addition, subtraction, multiplication and division */

double numAdd(double num1, double num2) /* function for addition */
{
    double result;
    result = num1 + num2;
    return result;
}

double numSubtract(double num1, double num2) /* function for subtraction */
{
    double result;
    result = num1 - num2;
    return result;
}

double numMulitiply(double num1, double num2) /* function for multiplication */
{
    double result;
    result = num1 * num2;
    return result;
}

double numDivide(double num1, double num2) /* function for division */
{
    double result;
    result = num1 / num2;
    return result;
}

/* the main body of the program */
int main()
{
   int userSelect; /* The variable for the user selection */
   double num1; /* variable for the numbers to be accepted by the input */
   double num2; // Same as above
   double sum;
   double difference;
   double product;
   double quotient;

   printf("Welcome To The Simple Calculator!\n");
   printf("Please select an operation by entering a single digit\n");
   printf("Addition: 1\nSubtraction: 2\nMultiplication: 3\nDivision: 4\n");
   userSelect = getchar();

   switch (userSelect)
   {
   case '1':     
       printf("Enter first number: \n");
       scanf("%lf", &num1);
       printf("Enter second number: \n");
       scanf("%lf", &num2);
       sum = numAdd(num1, num2);
       printf("The answer is: %lf\n", sum);
       break;
    
   case '2':
       printf("Enter first number: \n");
       scanf("%lf", &num1);
       printf("Enter second number: \n");
       scanf("%lf", &num2);
       difference = numSubtract(num1, num2);
       printf("The answer is: %lf\n", difference);
       break;

    case '3':
       printf("Enter first number: \n");
       scanf("%lf", &num1);
       printf("Enter second number: \n");
       scanf("%lf", &num2);
       product = numMulitiply(num1, num2);
       printf("The answer is: %lf\n", product);
       break;

    case '4':
       printf("Enter first number: \n");
       scanf("%lf", &num1);
       printf("Enter second number: \n");
       scanf("%lf", &num2);
       quotient = numDivide(num1, num2);
       printf("The answer is: %lf\n", quotient);
       break;
   default:
        printf("You chose an invalid operation. Try again.\n");
       break;
   } 
    return 0;
}
