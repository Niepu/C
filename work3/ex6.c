#include<stdio.h>
#include<stdlib.h>

int ex6(void)
{
	int i = 1, j = 1;
	for (i = 1; i <= 9; i++)                          //¦C
	{
		for (j = 1; j <= 9; j++)                     //¦æ
		{
			printf("%d*%d=%2d  |  ", i, j, i*j);
		}
		printf("\n");
		j = 1;
	}
}