#include<stdio.h>
#include<stdlib.h>
void ex3(void)
{
	int score;
	printf("請輸入考試成績:");
	scanf("%d", &score);

	if (score < 60)
	{
		if (score >= 50)
			printf("再加把勁吧! \n");
		else
			printf("你要被當了!! \n");
	}
	else
		printf("恭喜及格OUO \n");
}