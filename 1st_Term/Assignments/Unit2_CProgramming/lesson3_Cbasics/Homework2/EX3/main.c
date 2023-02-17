#include <stdio.h>
#include <stdlib.h>
/*Write a C program to find the largest number among three numbers*/
int main()
{
    float a, b, c;
    float maximum;
    printf("Enter three numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f %f", &a, &b, &c);
    if (a>=b)
    {
        if(a>=c)
            printf("Largest number = %g", a);
        else
            printf("Largest number = %g", c);
    }
    else
    {
        if(b>=c)
            printf("Largest number = %g", b);
        else
            printf("Largest number = %g", c);
    }
}
