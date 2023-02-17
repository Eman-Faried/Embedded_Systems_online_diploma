#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct SDistance
{
    int feet;
    float inch;
};
int main()
{
    struct SDistance d1, d2, sum;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("\nEnter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;

    if(sum.inch>12.0)
    {
        sum.inch =sum.inch-12.0;
        ++sum.feet;
    }
    printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);


}
