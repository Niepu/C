#include<stdio.h>
#include<stdlib.h>

int ex4(void)
{
	int i = 5, j = 1;
	int a, sum = 0;
	while (i <= 20)
	{
		while (j <= 1)
		{
			a = i*i;
			printf("%d*%d=%2d", i, i, a);
			j++;
			sum = sum + a;
		}
		printf("\n");
		i++;
		j = 1;
	}
	printf("加起來和是 %d \n", sum);
}