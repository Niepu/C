#include<stdio.h>
#include<stdlib.h>

struct work
{
	char name[20];
	int hours;
	int pay;
	int total_pay;
};

void calculate(struct work *);

void ex7() 
{
	struct work service;
	service.pay = 120;
	printf("�п�J�z���m�W: ");
	scanf("%s", &service.name);
	printf("�п�J�u�@�ɼ�: ");
	scanf("%d", &service.hours);
	calculate(&service);

	printf("�z�`�@���~��O $%d\n", service.total_pay);
}

void calculate(struct work*ptr)
{
	ptr->total_pay = ptr->hours*ptr->pay;
}


