#include <stdio.h>
#include <stdlib.h>

//Write a program in C to print a string in reverse using a pointer


int main()
{
    char str[100];
    char *pstr;
    char rev;
    printf("Input a string: ");
    fflush(stdin);  fflush(stdout);
    scanf("%s", str);
    int size =  strlen(str)-1;
    pstr = str;

    for(int i=0; i<size; i++)
    {
        pstr++;
    }

    for(int i=size; i>=0; i--)
    {
        printf("%c", *pstr);
        pstr--;
    }
}
