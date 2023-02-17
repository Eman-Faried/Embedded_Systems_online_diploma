#include <stdio.h>
#include <stdlib.h>

union job
{
    char name[32];
    float salary;
    int work_no;
}u;
struct job1
{
    char name[32];
    float salary;
    int work_no;

}s;
int main()
{
    printf("size of union = %d", sizeof(u));
    printf("\nsize of structure = %d", sizeof(s));
}
