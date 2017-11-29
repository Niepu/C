#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//ť���ܭ��n

void insert2();
void del2();
void list2();

struct student
{
	int id;
	char name[10];
	double score;
	struct student *next;
};

struct student *head, *ptr;


int ex14()
{
	char option;
	head = (struct student *) malloc(sizeof(struct student));

	head->next = NULL;

	do
	{

		printf("\n1 => �s�W�@�`�I\n");
		printf("2 => �R���@�`�I\n");
		printf("3 => �C�L��C���Ҧ��`�I\n");
		printf("4 => ����\n");
		printf("�п�ܤ@����");
		scanf("%s", &option);
		switch (option)
		{
		case '1': insert2();
			break;

		case '2': del2();
			break;

		case '3': list2();
			break;

		case '4': printf("�A��\n");
			break;

		default: printf("���~\n");
		}

	} while (option != '4');
	return 0;
}

void insert2()
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

void del2()
{
	struct student *current;
	current = head->next;

	if (current->next == NULL)
		printf("The linked list is empty\n");
	else
	{
		head->next = current->next;
		printf("\n<< Delete a student data >>\n");
		printf("%-10d %-10s %-10.2f\n", current->id, current->name, current->score);
	}
}

void list2()
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