#include <stdio.h>
#include "functions.h"
void fibonacci()
{
	muh limit = 4000000;
	var a = 1, b = 2, c = 3;
	while(c < limit)
	{
		a = b;
		b = c;
		c = a+b;
	}
	if(!(a%2))
		printf("Sum will be %d", (c-1)/2);
	else if(!(b%2))
		printf("Sum will be %d", (b+c-1)/2);
	else
		printf("Sum will be %d", (b+2*c-1)/2);
}

