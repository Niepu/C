#include<stdint.h>
#include<stdlib.h>

void ex2(void)
{
	int i, j, sum = 0;					//設定2個變數，和總和值為0。

	do                                  //do while迴圈開始。
	{
		printf("輸入數字:");
		scanf("%d", &j);                //輸入一個數字，回傳給變數j。

	} while (j % 2 == 1);                //如果j除上2等於1，則跳離do while迴圈。
	for (i = 2; i <= j; i = i + 2)      //for迴圈，i初始值為2，i小於等於輸入值時，i等於i加2
	{
		sum = sum + i;                  //總和從零開始累加
	}
	printf("答案為 %d \n", sum);
}