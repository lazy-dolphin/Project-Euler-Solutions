#include <stdio.h>
#include "functions.h"
void greatest_product()
{
	FILE *bp = fopen("number.txt", "r");
	FILE *ep = fopen("number.txt", "r");
	int bd, ed, inc = 0;
	lvar prod = 1, max = 1;
	fseek(ep, 12, SEEK_END);
	for(int i = 0; i < 13; ++i)
	{
		fscanf(bp, "%1d", &bd);
		fscanf(ep, "%1d", &ed);
		prod *= bd;
		max *= ed;
	}
	if(prod > max)
		max = prod;
	fseek(bp, 0, SEEK_SET);
	fseek(ep, 13, SEEK_SET);
	while((fscanf(ep, "%1d", &ed) != EOF))
	{
		fscanf(bp, "%1d", &bd);
		if((inc) && !(ed > bd))
		{
			fseek(bp, -1, SEEK_CUR);
			prod *= 1;
			for(int i = 0; i < 13; ++i)
			{
				fscanf(bp, "%1d", &bd);
				prod *= bd;
			}
			if(prod > max)
				max = prod;
			fseek(bp, -12, SEEK_CUR);
		}
		inc = ed > bd;
	}
	printf("%llu\n", max);
}




