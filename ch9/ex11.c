#include<stdio.h>
#include<stdlib.h>

void ex11()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student *ptr;
	ptr = (struct student *) malloc(sizeof(struct student));
	printf("請輸入學生姓名: ");
	scanf("%s", &ptr->name);
	printf("請輸入學生成績: ");
	scanf("%d", &ptr->score);
	printf("\n學生的姓名是 %s\n", ptr->name);
	printf("成績為 %d\n", ptr->score);
}