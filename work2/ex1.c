#include <stdio.h>
#include <stdlib.h>
int ex1(void)
{
	int a;
	printf("块计\n");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d is .案计\n", a);
	else
		printf("%d is .计\n", a);
}