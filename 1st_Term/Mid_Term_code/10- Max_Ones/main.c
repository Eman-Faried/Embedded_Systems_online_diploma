#include <stdio.h>
#include <stdlib.h>
int count1;
int max;
int max_ones_number(int num)
{
    if(num%2==1)
      {count1++;}
    if(num%2==0)
    {
       if(count1>max)
          { max = count1;}
          count1=0;
    }
    if(num==0)
    {
        if(count1>max)
          { max = count1;}
          return max;
    }
    max_ones_number(num/2);
    return max;

}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Max number of ones between two zeros: %d ", max_ones_number(num));
}
