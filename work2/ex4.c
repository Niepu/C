#include <stdio.h>
#include <stdlib.h>
int ex4(void)
{
	int x, y, c, d;
	int a = 45, b = 55;
	printf("�ï]�����ƶq:");
	scanf("%d", &x);
	printf("�Q�s���ƶq:");
	scanf("%d", &y);
	c = x + y;
	d = (a*x) + (b*y);
	if (c > 15)
	{
		if (d >= 800)
			printf("�ɦ�9���u�f�A������:%d \n", d * 9 / 10);
		else
			printf("������:%d \n", d);
	}
	else
		printf("������:%d \n", d);
}