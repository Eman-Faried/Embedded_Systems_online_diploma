#include <stdio.h>
#include <stdlib.h>
/*Write C Program to Multiply two Floating Point Numbers*/
int main()
{
    float num1, num2, product;
    printf("Enter two numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f", &num1, &num2);
    product = num1*num2;
    printf("Product: %f", product);

}
