#include <stdio.h>
#include <stdlib.h>
/*Write a C program to find a factorial of a number*/
int main()
{
    int num;
    unsigned int fact=1;
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    if (num<0)
        printf("Error!! Factorial of negative number does not exist. ");
    else
    {
        for(int i=1; i<=num; ++i)
        {
            fact *= i;
        }
        printf("Factorial = %u", fact);
    }
    return 0;

}
