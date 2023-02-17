#include <stdio.h>
#include <stdlib.h>
//Write a c program to insert an element in an array
int main()
{
    int num, location, element;
    printf("\nEnter no of elements: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    int a[num];
    for(int i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the element to be inserted: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &element);

    printf("Enter the location: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &location);

    for(int i=num; i>= location; i--)
    {
        a[i] = a[i-1];
    }
    num++;
    a[location-1] = element;

    for(int i=0; i<num; i++)
    {
        printf("%d ", a[i]);
    }
















}
