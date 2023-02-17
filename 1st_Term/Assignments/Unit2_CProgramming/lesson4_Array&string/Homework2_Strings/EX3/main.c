#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Write a c program to reverse string without using library function
int main()
{
    char a[1000];
    char rev;
    int i, j=0;
    printf("Enter the string: ");
    fflush(stdin); fflush(stdout);
    gets(a);
    j = strlen(a)-1;
    for(int i=0; i<j; i++)
    {
        rev = a[i];
        a[i] = a[j];
        a[j] = rev;
        j--;
    }
    printf("\nReverse string is: %s", a);

}
