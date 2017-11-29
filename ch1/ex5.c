#include<stdio.h>
#include<stdlib.h>

//輸入函數scanf()

void ex5(void)
{
	int num;

	printf("Please input an integer: ");   //顯示要輸入的數字，範圍要是integer
	scanf("%d", &num);					   //輸入函數
	printf("num=%d \n", num);              //顯示輸入的結果
}