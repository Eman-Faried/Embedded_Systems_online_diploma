#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if(num > 1)
    return num*factorial(num-1);
}
int main()
{
    int n;
    printf("Enter a positive integer number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
}
