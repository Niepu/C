#include <stdio.h>
#include <stdlib.h>
int ex3(void)
{
	int a;
	printf("�Ѯ�ū�:");
	scanf("%d", &a);
	if (a <= 22 && a >= 20)
		printf("�Х[�@�����~�M! \n");
	else if (a <= 17 && a >= 14)
		printf("�Ѯ�N, �Ь�W�~�M!\n");
	else
		printf("���b�D�ؽd��\n");
}