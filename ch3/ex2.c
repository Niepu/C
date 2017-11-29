#include<stdio.h>
#include<stdlib.h>
void ex2(void)
{
	int num1, num2, larger;
	printf("Please input two integers\n::");
	printf("輸入第一個數字::");
	scanf("%d", &num1);
	printf("輸入第二個數字::");
	scanf("%d", &num2);

	num1 > num2 ? (larger = num1) : (larger = num2);
	printf("%d greater value \n", larger);

}