#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n)
 {
     int sum= 0;
     int rem;
     while(n!=0)
    {
        rem = n%10;
        n= n/10;
        sum=sum+rem;
    }
    return sum;

 }


int main() {

    int n;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    printf("Sum of digits = %d", sum_of_digits(n));
    return 0;
}

/*
int rem;
int sum_of_digits(int n)
 {
    if(n!=0)
    {
        rem = rem + (n%10);
        n= n/10;
        sum_of_digits(n);
        return rem;
    }
    else
        return 0;


 }
*/


