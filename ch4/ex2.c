#include<stdio.h>
#include<stdlib.h>

void ex2(void)
{
	int i, score[4];
	score[0] = 78;
	score[1] = 55;
	score[2] = 92;
	score[3] = 80;

	for (i = 0; i <= 3; i++)
		printf("score[%d]=%d\n", i, score[i]);
}