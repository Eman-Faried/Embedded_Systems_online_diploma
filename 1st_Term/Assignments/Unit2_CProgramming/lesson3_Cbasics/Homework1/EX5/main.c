#include <stdio.h>
#include <stdlib.h>
/*Write C Program to Find ASCII Value of a Character*/
int main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c );
}
