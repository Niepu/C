#include<stdio.h>
#include<stdlib.h>
void swap(int, int);

int ex6()
{
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
}

void swap(int x, int y)   //因為是在另一個記憶體位置，所以原式不變
{
	printf("a=%d,b=%d\n\n", x, y);
	int tmp = x;
	x = y;
	y = tmp;
	printf("a=%d,b=%d\n", x, y);
}