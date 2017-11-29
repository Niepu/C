#include <stdio.h> 
#include <stdlib.h> 

//邏輯運算子

void ex4(void)
{
	int score;
	printf("Please input a score:");
	scanf("%d", &score);
	if ((score<0) || (score>100))		//若成績超出0到100之間，就顯示錯誤(用的是或OR )
		printf("input error!!\n");
	if ((score<60) && (score>49))		//若成績介於50到59之間，就顯示再加油(用的是和AND)
		printf("make up exams!!\n");
}