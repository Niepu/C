#include <stdio.h>
#include <stdlib.h>
int ex3(void)
{
	int a;
	printf("天氣溫度:");
	scanf("%d", &a);
	if (a <= 22 && a >= 20)
		printf("請加一件薄外套! \n");
	else if (a <= 17 && a >= 14)
		printf("天氣冷, 請穿上外套!\n");
	else
		printf("不在題目範圍\n");
}