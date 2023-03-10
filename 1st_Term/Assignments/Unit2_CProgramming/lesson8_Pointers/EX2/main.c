#include <stdio.h>
#include <stdlib.h>

//Write a program in C to print all the alphabets using a pointer

int main()
{
    char alpha[26];
    char *p_alpha;
    p_alpha = alpha;

    printf("The Alphabets are: \n");
    for(int i=0; i<26; i++, p_alpha++)
    {
        *p_alpha = i + 'A';
        printf("%c ", *p_alpha );
    }
}
