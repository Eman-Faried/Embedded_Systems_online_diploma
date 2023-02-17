#include <stdio.h>
#include <stdlib.h>
/*Write C Program to Print a Integer Entered by a User*/
int main()
{
   int num;
   printf("Enter an integer: ");
   fflush(stdin); fflush(stdout);
   scanf("%d", &num);
   printf("You entered: %d", num);
}
