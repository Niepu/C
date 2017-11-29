#include<stdio.h>
#include<stdlib.h>

void add10(int *);

int ex5()
{
	int a = 5;
	printf("Before call add10(),a=%d\n", a);
	add10(&a);
	printf("After call add10(),a=%d\n", a);
}

void add10(int *p1)
{
	*p1 = *p1 + 10;
}