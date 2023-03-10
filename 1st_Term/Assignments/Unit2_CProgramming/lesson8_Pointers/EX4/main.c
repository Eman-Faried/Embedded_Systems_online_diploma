#include <stdio.h>
#include <stdlib.h>

//Write a program in C to print the elements of an array in reverse order.

int main()
{
    int size;
    printf("Input the number of elements to store in the array(max 15): ");
    scanf("%d", &size);
    int arr[size];
    int *ptr;
    ptr = arr;
    printf("\nInput %d number of elements in the array: \n", size);
    for(int i=0; i<size; i++)
    {
        printf("\nElement - %d: ", i+1);
        fflush(stdin); fflush(stdout);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &arr[size - 1];
    printf("The elements of array in reverse order are: \n");
    for(int i=size; i>0; i--)
    {
        printf("Element - %d: %d\n", i, *ptr);
        ptr--;
    }

}
