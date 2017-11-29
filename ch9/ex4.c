#include<stdio.h>
#include<stdlib.h>

/*ex2改寫正方形 */

void ex4(void)
{
	struct square
	{
		double length,area;
	};
	struct square squ;
	printf("請輸入正方形的長:");
	scanf("%lf", &squ.length);
	squ.area = squ.length * squ.length;
	printf("正方形的面積為%.2f \n", squ.area);
}