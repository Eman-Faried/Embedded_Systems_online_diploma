#include <stdio.h>
#include <stdlib.h>

/*Write C program to check whether a number is even or odd*/
int main()
{
    int num;
    printf("Enter an integer you want to check: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    if (num%2==0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}
