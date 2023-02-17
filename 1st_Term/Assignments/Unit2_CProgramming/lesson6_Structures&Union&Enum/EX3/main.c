#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct SComplex
{
    float r;
    float i;
};
struct SComplex add(struct SComplex n1, struct SComplex n2)
{
    struct SComplex sum;
    sum.r = n1.r + n2.r;
    sum.i = n1.i + n2.i;
    return sum;

};

int main()
{
    struct SComplex n1, n2, sum;
    printf("For 1st complex number:\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &n1.r, &n1.i);
    printf("For 2nd complex number:\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &n2.r, &n2.i);
    sum = add(n1, n2);
    printf("Sum = %.f + %.1fi", sum.r, sum.i);
}
