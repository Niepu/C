#include <stdio.h>
#include <stdlib.h>
int ex5(void)
{
	int x, y, c, d;
	int a = 45, b = 55;
	printf("珍珠奶茶數量:");
	scanf("%d", &x);
	printf("烏龍茶數量:");
	scanf("%d", &y);
	c = x + y;
	d = (a*x) + (b*y);
	if (c>12 || x >= 10 || d >= 700)
		printf("享有95折優惠，價錢為:%d \n", d * 95 / 100);
	else
		printf("價錢為:%d \n", d);

}