#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct SStudent
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct SStudent s;
    printf("Enter information of students:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);

}
