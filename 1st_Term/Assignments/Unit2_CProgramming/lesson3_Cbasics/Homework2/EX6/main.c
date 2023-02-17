#include <stdio.h>
#include <stdlib.h>
/*Write a C program to calculate sum of natural numbers*/
int main()
{
    int n;
    int sum=0;
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("Sum = %d", sum);
}
