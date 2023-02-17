#include <stdio.h>
#include <stdlib.h>
// Write a c program to search an element in array
int main()
{
    int num, element;
    printf("\nEnter no of elements: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    int a[num];
    for(int i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &element);
    for(int i=0; i<num; i++)
    {
        if(a[i]==element)
            printf("Number found at the location = %d", i+1);
    }


}
