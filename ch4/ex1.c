#include<stdio.h>
#include<stdlib.h>

void ex1(void)
{
	int n, i = 1, sum = 0;
	do
	{
		printf("Please input the value of n (n>0):");
		scanf("%d", &n);
	} while (n <= 0);

	do
	{
		sum =sum+i;
		i++;
	} while (i <= n);
	printf("1+2+...+%d = %d\n", n, sum);
}