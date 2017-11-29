#include<stdio.h>
#include<stdlib.h>
void ex1(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(",a++ return value %d", a++);
	printf(",a=%d\n", a);
	printf("b=%d", b);
	printf(",++b return value %d", ++b);
	printf(",b=%d\n", b);

	system("pause");
	return 0;
}