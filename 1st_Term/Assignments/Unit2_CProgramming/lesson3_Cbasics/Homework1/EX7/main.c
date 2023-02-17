#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, temp;
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g", b);

}
