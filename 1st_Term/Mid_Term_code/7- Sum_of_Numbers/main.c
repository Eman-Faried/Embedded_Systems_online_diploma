#include <stdio.h>
#include <stdlib.h>
int sum;
int sum_of_numbers(int start, int end)
{
    if(start<=end)
    {
        sum += start;
        sum_of_numbers(start+1, end);
    }
    return sum;





}
int main()
{
    int start, end;
    printf("Enter the first number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &start);
    printf("Enter the last number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &end);
    printf("The sum from %d to %d = %d", start, end, sum_of_numbers(start, end));
}
