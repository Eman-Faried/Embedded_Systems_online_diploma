#include <stdio.h>
#include <stdlib.h>

int reverse_array(int arr[], int size)
{
    for(int i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[100], size;
    printf("Enter the size of the array: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &size);
    printf("Enter elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The reversed array is: ");
    reverse_array(arr, size);

}
