#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Write a c program to find yhe frequency of characters in a string.
int main()
{
    char text[100], ch;
    int count=0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(text);
    printf("Enter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &ch);

    for(int i=0; text[i] != '\0'; i++)
    {
        if(text[i]== ch)
            ++count;
    }
    printf("Frequency of %c = %d", ch, count);



}
