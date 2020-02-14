#include <stdio.h>
#include "functions.h"
void largest_prime_factor()
{
	lvar num = 600851475143ULL, i = 1ULL;
	while(num != 1ULL)
	{
		++i;
		while(!(num % i))
			num /= i;
	}
	printf("Largest prime factor is: %lld", i);
}
