#include <stdio.h>
#include <stdlib.h>
/*Write a C program to make a simple calculator to add, subtract, multiply or divide using switch*/
int main()
{
    char arithmatic_o;
    float num1, num2;
    printf("Enter operator either + or - or * / : ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &arithmatic_o);
    printf("Enter two operands: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f", &num1, &num2);
    switch(arithmatic_o)
    {
      case '+':
        printf("%g %c %g = %.1f", num1, arithmatic_o, num2, num1+num2);
        break;
      case '-':
        printf("%g %c %g = %.1f", num1, arithmatic_o, num2, num1-num2);
        break;
      case '*':
        printf("%g %c %g = %.1f", num1, arithmatic_o, num2, num1*num2);
        break;
      case '/':
        printf("%g %c %g = %.1f", num1, arithmatic_o, num2, num1/num2);
        break;
      default:
        printf("Error!!!");
        break;
    }
}
