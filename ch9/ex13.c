#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//聽說很重要

void insert1();
void list1();

struct student
{
	int id;
	char name[10];
	double score;
	struct student *next;
};

struct student *head,*ptr;


int ex13()
{
	char option;
	head = (struct student *) malloc(sizeof(struct student));

	head->next = NULL;

	do
	{
		printf("\n1 => 新增一節點\n");
		printf("2 => 列印串列的所有節點\n");
		printf("3 => 結束\n");
		printf("請選擇一項目");
		scanf("%s", &option);
		puts("");
		switch (option)
		{
		case '1': insert1();
			break;

		case '2': list1();
			break;

		case '3': printf("再見\n");
			break;

		default: printf("錯誤\n");
		}

	} while (option != '3');
	return 0;
}

void insert1()
{
	ptr = (struct student *) malloc(sizeof(struct student));

	printf("\n<< Creating student data >>\n");
	printf("Student ID <int> : ");

	scanf("%d", &ptr->id);

	printf("Student name <string> : ");
	scanf("%s", &ptr->name);

	printf("Student score <double> : ");
	scanf("%lf", &ptr->score);

	ptr->next = head->next;
	head->next = ptr;
}

void list1()
{
	struct student *current;
	if (head->next == NULL)
		printf("The linked list is empty\n");
	else
	{
		current = head->next;
		printf("\n<< Listing student data >>\n");

		while (current != NULL)
		{
			printf("%-10d %-10s %-10.2f\n", current->id, current->name, current->score);
			current = current->next;
		}
	}
}