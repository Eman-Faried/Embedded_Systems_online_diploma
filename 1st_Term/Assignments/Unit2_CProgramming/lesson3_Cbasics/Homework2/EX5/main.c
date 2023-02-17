#include <stdio.h>
#include <stdlib.h>
/*Write a C program to check whether a character is an alphabet or not*/
int main()
{
    char c;
    int c1;
    int c2;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &c);
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}
