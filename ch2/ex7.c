#include <stdio.h> 
#include <stdlib.h>

//條件運算子的範例

void ex7(void)
{
	int num1, num2, larger;
	printf("Please input two integers: :");
	scanf("%d %d", &num1, &num2);
	num1>num2 ? (larger = num1) : (larger = num2); //條件判斷，如果num1大於num2，那larger就會等於num1，否則等於num2
	printf("%d greater value \n", larger);
}