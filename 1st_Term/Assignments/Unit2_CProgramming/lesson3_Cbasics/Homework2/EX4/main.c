#include <stdio.h>
#include <stdlib.h>
/*Write C program that takes a number from user and checks whether that number is either positive or negative*/
int main()
{
    float num;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num);
    if (num==0)
        printf("You entered zero");
    else if (num>0)
        printf("%g is positive", num);
    else
        printf("%g is negative", num);

}
