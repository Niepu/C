#include<stdio.h>
#include<stdlib.h>

void ex3(void)

{
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("�п�Jnum[%d]�����: ", i);
		scanf("%d", &num[i]);
	}
	printf("\n ���}�C���U�C����: \n");
	for (i = 0; i < 10; i++)
		printf("num[%d]=%d\n", i, num[i]);
}