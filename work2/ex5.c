#include <stdio.h>
#include <stdlib.h>
int ex5(void)
{
	int x, y, c, d;
	int a = 45, b = 55;
	printf("痌イ计秖:");
	scanf("%d", &x);
	printf("疩纒计秖:");
	scanf("%d", &y);
	c = x + y;
	d = (a*x) + (b*y);
	if (c>12 || x >= 10 || d >= 700)
		printf("ㄉΤ95ч纔磃基窥:%d \n", d * 95 / 100);
	else
		printf("基窥:%d \n", d);

}