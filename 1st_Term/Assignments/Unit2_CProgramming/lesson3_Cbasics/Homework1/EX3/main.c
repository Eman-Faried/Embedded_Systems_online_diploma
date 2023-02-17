#include <stdio.h>
#include <stdlib.h>
/*Write C Program to Add Two Integers*/
int main()
{
    int num1, num2, sum;
    printf("Enter two integers: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &num1, &num2);
    sum = num1+num2;
    printf("Sum: %d", sum);

}
