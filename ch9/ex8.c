#include<stdio.h>
#include<stdlib.h>

//利用[結構陣列]存取資料
//結構陣列初值設定，使用大括號{},指定每筆成員的值，資料之間以逗號`,'隔開
//陣列結構是一般變數，所以使用"點"運算子存取結構成員
//ex:classes[註腳].id,classes[註腳].name,classes[註腳].score

int ex8()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	struct student classes[5] = {{ 10811,"John",88.0 },
								{ 10812,"Coco",82.0 },
								{ 10813,"Jack",76.5 },
								{ 10814,"Tina",91.0 },
								{ 10815,"Bob",61.5 } };
		int i;
		printf(" 學生名單如下\n");
		printf(" ----------\n\n");
		printf("學號  姓名 分數\n");

		for (i = 0; i < 5; i++)
		{
			printf("%d %-10s %5.lf\n",
				classes[i].id,
				classes[i].name,
				classes[i].score);
		}
}



