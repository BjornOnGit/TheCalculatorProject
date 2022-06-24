/* This program is a simple calculator that computes all four basic arithmetic operations */
#include<stdio.h>
/* Starting off with creating functions for addition, subtraction, multiplication and division */

double numAdd(double num1, double num2) /* function for addition */
{
    double result;
    result = num1 + num2;
    return result;
}

double numSubtract(double x, double y) /* function for subtraction */
{
    double result;
    result = x - y;
    return result;
}

double numMulitiply(double x, double y) /* function for multiplication */
{
    double result;
    result = x * y;
    return result;
}

double numDivide(double x, double y) /* function for division */
{
    double result;
    result = x / y;
    return result;
}

/* the main body of the program */
int main()
{
   int userSelect;
   double num1;
   double num2;
   double sum;

   printf("Welcome To The Simple Calculator!\n");
   printf("Please select an operation by entering a single digit\n");
   printf("Addition: 1\nSubtraction: 2\nMultiplication: 3\nDivision: 4\n");
   userSelect = getchar();

   switch (userSelect)
   {
   case '1':     
       printf("Enter first number: \n");
       scanf("%f", &num1);
       printf("Enter second number: \n");
       scanf("%f", &num2);
       sum = numAdd(num1, num2);
       printf("The answer is: %f\n", sum);
       break;
    
   
   default:
       break;
   } 
    return 0;
}
