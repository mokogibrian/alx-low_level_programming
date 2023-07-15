#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * Main - Program entry point
 * 
 * Description - Prints whether the value of last digit of n is greater than 5, less than 6 or is 0. 
 *
 * Return = Always 0(Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if  (n == 0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative\n", n);
	return (0);
}
