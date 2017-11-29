#include <stdio.h> 
#include <stdlib.h> 
void ex9(void)
{
	int i = 1, sum = 0;
	while (i <= 100)
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
	printf(" It must be added to the %d\n", i - 1);
}
