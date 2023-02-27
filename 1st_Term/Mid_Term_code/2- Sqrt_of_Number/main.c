#include <stdio.h>
#include <stdlib.h>

/*
Algorithm of the function:
 For number S:
 - Make an initial guess. Guess any positive number x0. (S/2 is used as first guess)
 - Improve the guess. Apply the formula x1 = (x0 + S / x0) / 2.
   The number x1 is a better approximation to sqrt(S).
 - Iterate until convergence. Apply the formula xn+1 = (xn + S / xn) / 2 until the process converges.
   Convergence is achieved when the digits of xn+1 and xn agree to as many decimal places as you desire.
*/


float sqrt_of_number(int n)
{
    float result = 0;
    float guess = n/2;
    while(guess != result)
    {
        result = guess;
        guess = (guess + n/guess)/2;
    }
    return result;

}
int main()
{
    int num;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    printf("The square root of %d = %f", num, sqrt_of_number(num));
}

