#include<stdio.h>
#include<stdlib.h>

void ex1()
{
	struct student
	{
		char name[20];
		int score;
		float flo;
		double dou;
	} rec1;

	struct student rec2;

	printf("rec1 ���c�� %d bytes\n", sizeof(rec1));
	printf("rec2 ���c�� %d bytes\n", sizeof(rec2));
}