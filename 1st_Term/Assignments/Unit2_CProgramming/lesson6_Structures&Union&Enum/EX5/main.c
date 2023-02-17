#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#define area(r) (PI*r*r)
int main()
{
    int rad;
    float area;
    printf("Enter the radius: ");
    scanf("%d", &rad);
    area = area(rad);
    printf("Area = %.2f", area);


}
