#include <stdio.h> 
#include <stdlib.h> 

void ex8(void)
{
	int a, r;
	while (1)
	{
		do
		{
			printf("Input an integer:");
			scanf("%d", &a);
		} while (a <= 0);
		printf("The reverse is ");
		while (a != 0)
		{
			r = a % 10;
			a /= 10;
			printf("%d", r);
		}
		printf("\n\n");
		break;
	}
}