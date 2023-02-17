#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[1000];
    int count=0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(ch);

    for(int i=0; ch[i]!='\0'; i++)
    {
        count = count+1;
    }
    printf("Length of string: %d", count);
}
