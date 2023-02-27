#include <stdio.h>
#include <stdlib.h>
int prime_number(int num)
{
   int flag = 0;
   for(int i=2; i<=num/2; i++)
   {
       if(num%i==0)
        {
            flag = 1;
            break;
        }
   }
   return flag;
}

int main()
{
    int n1, n2;
    int prime;
    printf("Enter two numbers(intervals): ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for(int i=n1+1; i<n2; i++)
    {

        prime = prime_number(i);
        if(prime == 0)
            printf("%d ", i);

    }




}
