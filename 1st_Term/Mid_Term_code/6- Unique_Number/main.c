#include <stdio.h>
#include <stdlib.h>

int unique_number(int arr[], int size)
{

    for(int i=0; i<size; i++)
    {
        int flag=0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j] && i!=j)
               flag++;
        }
        if(flag==0)
            printf("%d ", arr[i]);


    }

}
int main()
{

    int size;
    printf("Enter the size of the array: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The unique number is: ");
     unique_number(arr, size) ;

}


