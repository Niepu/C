#include<stdio.h>
#include<stdlib.h>

//�����X��쪺�e��

void ex4(void)
{
	int num1 = 32, num2 = 1024;
	float num3 = 12.3478f;
	printf("num1=%6d km\n", num1);     //��ܡ�������32 km  (���O�Ů�)
	printf("num2=%-6d km\n", num2);    //���1024���� km  (���O�Ů�)
	printf("num3=%6.2f mile\n", num3); //��ܡ�12.35 km  (���O�Ů�)
}