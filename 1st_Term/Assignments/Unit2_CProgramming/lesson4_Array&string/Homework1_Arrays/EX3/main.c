#include <stdio.h>
#include <stdlib.h>
// Write a c program to find transpose of a matrix
int main()
{
    int rows, cols;
    printf("Enter rows and columns of matrix: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    int t[cols][rows];
    printf("Enter elements of matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("Enter elements a%d%d: ", i+1, j+1);
            fflush(stdin); fflush(stdout);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            t[j][i]=a[i][j];
        }

    }
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }


}
