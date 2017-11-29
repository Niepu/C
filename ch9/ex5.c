#include<stdio.h>
#include<stdlib.h>

/* ex3範例改成學生姓名與成績
*/

void ex5()
{
	struct student
	{
		char mane[20];
		int num;
	};
	struct student stud = { "王大明",90 };

	printf("學生姓名: %s\n", stud.mane);
	printf("學生成績: %d\n", stud.num);
}