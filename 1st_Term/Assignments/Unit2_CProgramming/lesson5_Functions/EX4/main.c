#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp)
{
    if(exp !=0)
      return base*power(base, exp-1);
    else
      return 1;

}

int main()
{
    int base, exp;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &base);
    printf("Enter power number(positive number): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &exp);
    printf("%d^%d = %d", base, exp, power(base, exp));

}
