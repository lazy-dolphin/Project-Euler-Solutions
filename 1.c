#include <stdio.h>
#include "functions.h"
void multiples()
{
	muh n = 1000/3, m = 1000/5, o = 1000/15;
	muh result = (3*n*(n+1) + 5*m*(m+1) - 15*o*(o+1))/2;
	printf("Sum of all the multiples of 3 or 5 below 1000 are: %d", result);
}
