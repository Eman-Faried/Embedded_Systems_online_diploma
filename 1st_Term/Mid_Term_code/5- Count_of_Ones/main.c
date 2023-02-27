#include <stdio.h>
#include <stdlib.h>

int count_of_ones(int num)
{
    int count=0;
    for(int i=0; i<32; i++)
    {
         if(num%2==1)
            count++;
         num=num/2;
    }
    return count;
}
int main()
{
    int num;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    printf("Number of ones= %d", count_of_ones(num));
}
