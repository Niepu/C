#include<stdio.h>
#include<stdlib.h>

/*ex2��g����� */

void ex4(void)
{
	struct square
	{
		double length,area;
	};
	struct square squ;
	printf("�п�J����Ϊ���:");
	scanf("%lf", &squ.length);
	squ.area = squ.length * squ.length;
	printf("����Ϊ����n��%.2f \n", squ.area);
}