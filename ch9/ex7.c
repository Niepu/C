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
	printf("請輸入您的姓名: ");
	scanf("%s", &service.name);
	printf("請輸入工作時數: ");
	scanf("%d", &service.hours);
	calculate(&service);

	printf("您總共的薪資是 $%d\n", service.total_pay);
}

void calculate(struct work*ptr)
{
	ptr->total_pay = ptr->hours*ptr->pay;
}


