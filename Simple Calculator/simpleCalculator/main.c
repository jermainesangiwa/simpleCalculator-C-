#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables
    char ch;
    double a, b;

    // Enter operator or exit 'x'
    while (1)
    {
       printf("Enter an operator (+, -, *, /), if you want to exit press x: ");
       scanf(" %c", &ch);

       // to exit
       if (ch == 'x')
       {
           exit(0);
       }

       // Enter any 2 values
       printf("Enter two first and second operand: ");
       scanf("%lf %lf", &a, &b);

       /* Using switch case we will differentiate
       operations based on different operator */
       switch(ch)
       {
           // Addition
           case '+':
               printf("%.1lf + %.1lf = %.1lf\n", a, b, a+b);
               break;

            // Subtraction
           case '-':
               printf("%.1lf - %.1lf = %.1lf\n", a, b, a-b);
               break;

            // Multiplication
           case '*':
               printf("%.1lf * %.1lf = %.1lf\n", a, b, a*b);
               break;

            // Division
           case '/':
               printf("%.1lf / %.1lf = %.1lf\n", a, b, a/b);
               break;

            // If operator doesn't match any case constant
           default:
               printf("Error! Please write a valid operator\n");
       }
       printf("\n");
    }
}
