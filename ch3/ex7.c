#include<stdio.h>
#include<stdlib.h>

void ex7(void)
{
	int i, j, n;
	printf("輸入要得行數:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}