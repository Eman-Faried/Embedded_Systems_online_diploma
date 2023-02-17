#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct SStudent
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct SStudent s[10];
    printf("Enter information of students:\n");
    for(int i=0; i<10; i++)
    {
        printf("For roll number %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("Displaying information of students:\n");
    for(int i=0; i<10; i++)
    {
        printf("Information for roll number %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %d\n", s[i].marks);
    }

}
