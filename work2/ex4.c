#include <stdio.h>
#include <stdlib.h>
int ex4(void)
{
	int x, y, c, d;
	int a = 45, b = 55;
	printf("痌イ计秖:");
	scanf("%d", &x);
	printf("疩纒计秖:");
	scanf("%d", &y);
	c = x + y;
	d = (a*x) + (b*y);
	if (c > 15)
	{
		if (d >= 800)
			printf("ㄉΤ9ч纔磃基窥:%d \n", d * 9 / 10);
		else
			printf("基窥:%d \n", d);
	}
	else
		printf("基窥:%d \n", d);
}