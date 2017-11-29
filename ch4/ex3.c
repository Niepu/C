#include<stdio.h>
#include<stdlib.h>

void ex3(void)

{
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("請輸入num[%d]的資料: ", i);
		scanf("%d", &num[i]);
	}
	printf("\n 此陣列有下列元素: \n");
	for (i = 0; i < 10; i++)
		printf("num[%d]=%d\n", i, num[i]);
}