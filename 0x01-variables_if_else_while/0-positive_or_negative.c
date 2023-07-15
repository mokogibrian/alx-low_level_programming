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
		printf(%d\n, "n is positive");
	else if  (n==0)
		printf(%d\n, "n is zero");
	else 
		printf(%d\n, "n is positive");
	return (0);
}
