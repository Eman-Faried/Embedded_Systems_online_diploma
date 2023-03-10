#include <stdio.h>
#include <stdlib.h>

//Write a program in C to show a pointer to an array which contents are pointer to structure.

struct SEmployee
{
    char name[50];
    int id;
};

int main()
{
   struct SEmployee emp1 = {"Ahmad", 152}, emp2 = {"Ali", 132}, emp3 = {"Mostafa", 176};
   struct SEmployee *arr[3] = {&emp1, &emp2, &emp3};
   struct SEmployee (*(*ptr)[3]) = &arr;

   for(int i=0; i<3; i++)
   {
       printf("Employee %d Name: %s\n", i+1, (*ptr)[i]->name);
       printf("Employee %d id: %d", i+1, (*ptr)[i]->id);
       printf("\n");
   }


}
