#include <stdio.h>
#include <stdlib.h>
int ex5(void)
{
	int x, y, c, d;
	int a = 45, b = 55;
	printf("�ï]�����ƶq:");
	scanf("%d", &x);
	printf("�Q�s���ƶq:");
	scanf("%d", &y);
	c = x + y;
	d = (a*x) + (b*y);
	if (c>12 || x >= 10 || d >= 700)
		printf("�ɦ�95���u�f�A������:%d \n", d * 95 / 100);
	else
		printf("������:%d \n", d);

}