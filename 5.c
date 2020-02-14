#include <stdio.h>
#include "functions.h"
void smallest_divisible_number()
{
	muh limit = 20;
	var p[] = {2, 3, 5, 7, 11, 13, 17, 19}, prod = 1;
	for(int i = 0; i < 8; ++i)
	{
		for(int j = 2; j <= limit; ++j)
		{
			if(!(j % p[i] || p[i] % (j / p[i])))
			{
				p[i] = j;
			}
		}
		prod *= p[i];
	}
	printf("%u\n", prod);
}
