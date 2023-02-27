#include <stdio.h>
#include <stdlib.h>
int count;
void reverse_words(char text[], int size)
{
    for(int i = size; i >= 0; i--)
	{
  		if(text[i] == ' ')
		{
			printf("%s ", &text[i]+1);
			text[i] = '\0';
		}

	}
	printf("%s", text);
}

int main()
{
    char text[100];
    printf("Enter a sentence: ");
    gets(text);
    int size = strlen(text)-1;
    reverse_words(text, size);
}

