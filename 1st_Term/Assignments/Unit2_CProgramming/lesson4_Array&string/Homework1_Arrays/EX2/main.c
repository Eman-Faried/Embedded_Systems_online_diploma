#include <stdio.h>
#include <stdlib.h>
// Write a c program to calculate the average using arrays
int main()
{   int n;
    printf("Enter the numbers of data: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    float a[n];
    float sum=0;


    for(int i=0; i<n; i++)
    {
        printf("%d. Enter number: ", i+1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &a[i]);
        sum +=a[i];
    }
    printf("Average = %.2f", sum/n);
}
