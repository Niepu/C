/*
create()新增一筆資料
list()列印所以紀錄

struct student classes[10]; 定義結構陣列使用固定的陣列成員(問題:例如 10000個怎麼辦)
ch

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct student
{
	int id;
	char name[10];
	double score;
};

struct student classes[10];
int index = 0;
void create();
void list();

int ex9()
{
	int c;
	do
	{
		printf("\n1 => create student date\n");
		printf("2 => list student data\n");
		printf("3 => quit\n");
		printf("請輸入選項");
		scanf("%d", &c);
		puts("");
		switch (c)
		{
		case 1: create();
			break;

		case 2: list();
			break;

		case 3: printf("再見\n");
			break;

		default: printf("錯誤\n");
		}

		}while (c != 3);
		system("pause");
		return 0;
}

void create()
{
	if (index >= 10) {
		printf("the array is full \n");
		return;
	}
	printf("\n<< Creating student data >>\n");
	printf("Student ID:");
	scanf("%d", &classes[index].id);
	while (getchar() != '\n')
		continue;
	
	printf("Student name: ");
	scanf("%s", &classes[index].name);

	printf("Student csore: ");
	scanf("%lf", &classes[index].score);
	index++;
	}

void list()
{
	int i;
	printf("\n<< Listing student data >>\n");

	for (i = 0; i < index; i++)
		printf("%-10d %-10s %-5.lf\n", classes[i].id , classes[i].name , classes[i].score);
}
