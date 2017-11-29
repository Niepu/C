#include <stdio.h>
#include <stdlib.h>
int ex6(void)
{
	{
		int i, x, a;
		printf("請輸入星星的行數:");
		scanf("%d", &x);
		for (i = 1; i <= x; i++)
		{
			for (a = x; a >= i; a--)
			{
				printf(" ");
			}
			for (a = 1; a <= i; a++)
				printf("*");
			printf("\n");
		}
	}

	{
		int i, x, a;
		printf("請輸入星星的行數:");
		scanf("%d", &x);
		for (i = 1; i <= x; i++)
		{
			for (a = 1; a <= i; a++)
			{
				printf("*");
			}
			for (a = 1; a <= x; a++)
				printf(" ");
			printf("\n");
		}
	}

	{
		int i, x, a;
		printf("請輸入星星的行數:");
		scanf("%d", &x);
		for (i = 1; i <= x; i++)
		{
			for (a = x; a >= i; a--)
				printf("*");
			printf("\n");
		}
	}

	{
		int i, x, a;
		printf("請輸入星星的行數:");
		scanf("%d", &x);
		for (i = 1; i <= x; i++)
		{
			for (a = 2; a <= i; a++)
			{
				printf(" ");
			}
			for (a = x; a >= i; a--)
				printf("*");
			printf("\n");
		}
	}

	{
		int i, x, a;
		printf("請輸入星星的行數:");
		scanf("%d", &x);
		for (i = 1; i <= x; i++)
		{
			for (a = x - 1; a >= i; a--)
				printf(" ");
			for (a = 1; a <= i; a++)
				printf("*");
			for (a = 1; a <= i - 1; a++)
				printf("*");
			printf("\n");
		}
	}

}