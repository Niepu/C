#include<stdio.h>
#include<stdlib.h>

void ex7(void)
{
	int score[5];
	int i = 0, num;
	float sum = 0.0f;
	printf("Please input the score,input 0 to end:\n");
	do
	{
		if (i == 5)
		{
			printf("Array space has bee used uo!!\n");
			i++;
			break;
		}
		printf("Please input the score: ");
		scanf("%d", &score[i]);
	} while (score[i++] > 0);
	num = i - 1;
	for (i = 0; i < num; i++)
		sum += score[i];
	printf("average score %.2f\n", sum / num);
}