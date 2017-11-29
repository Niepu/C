#include <stdio.h>
#include <stdlib.h>
int ex2(void)
{
	float a;
	printf("輸入攝氏溫度:");
	scanf("%f", &a);
	printf("華氏溫度為 %.2f \n", (a * 18 / 10) + 32);
}