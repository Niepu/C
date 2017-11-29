#include<stdio.h>
#include<stdlib.h>

//程式區塊及本體	

void ex2(void)
{
	int i = 2;	//宣告整數i，並設值為2
	if (i < 5)  //if判斷式，如果i有小於5，那會顯示下方結果
	{
		printf("變數i的值=%d \n", i);
		printf("變數i的值小於5 \n");
	}			//if區塊結束
}