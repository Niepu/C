#include <stdio.h> 
#include <stdlib.h> 

//巢狀 if 敘述的練習

void ex5(void)
{
	int score;
	printf(" Please input a score: ");  //輸入一個數字
	scanf("%d", &score);


	if (score<60)          /* 如果score<60 */
	{
		if (score >= 50)   /* 如果score>=50 */
			printf(" make up exams \n");
		else
			printf("Fail\n");
	}
	else
		printf("Pass\n");
}