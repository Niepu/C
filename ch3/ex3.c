#include<stdio.h>
#include<stdlib.h>
void ex3(void)
{
	int score;
	printf("�п�J�Ҹզ��Z:");
	scanf("%d", &score);

	if (score < 60)
	{
		if (score >= 50)
			printf("�A�[��l�a! \n");
		else
			printf("�A�n�Q��F!! \n");
	}
	else
		printf("���ߤή�OUO \n");
}