#include<stdio.h>
#include<stdlib.h>
void ex2(void)
{
	int num1, num2, larger;
	printf("Please input two integers\n::");
	printf("��J�Ĥ@�ӼƦr::");
	scanf("%d", &num1);
	printf("��J�ĤG�ӼƦr::");
	scanf("%d", &num2);

	num1 > num2 ? (larger = num1) : (larger = num2);
	printf("%d greater value \n", larger);

}