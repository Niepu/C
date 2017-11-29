#include <stdio.h> 
#include <stdlib.h> 
void ex6(void)
{
	int score;
	printf("Your score:");
	scanf("%d", &score);
	if (score >= 80)
		printf("%d is A\n", score);
	else if (score >= 70)
		printf("%d is B\n", score);
	else if (score >= 60)
		printf("%d is C\n", score);
	else
		printf("Failed!!\n");
}