#include<stdio.h>
#include<stdlib.h>
int swap1(int *,int *);

int ex7() 
{
	int a = 5, b = 20;                   //沒有用指標變數
	int z1, z2;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	z1 = swap1(a, b);
	z2 = swap1(b, a);
	printf("After swap...");
	printf("a=%d,b=%d\n", z1, z2);
}

int swap1(x, y)
{
	x = y;
	return x;
}


/*
#include<stdio.h>                     //有用指標變數
#include<stdlib.h>
void swap1(int *,int *);

int ex7() 
{
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap1(&a, &b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
}

void swap1(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	}
*/