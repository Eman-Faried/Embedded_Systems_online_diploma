#include <stdio.h>
#include <stdlib.h>


int Reverse_Digits(int num)
{
   if(num != 0)
   {
       int rem = num%10;
       printf("%d", rem);
       Reverse_Digits(num/10);
   }

}

int main()
{
    int num;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    Reverse_Digits(num);
}

