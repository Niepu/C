#include<stdio.h>
#include<stdlib.h>

int ex1(void)
{
	int i, j, n;
	printf("輸入要得行數:");
	scanf("%d", &n);              //輸入行數的變數
	for (i = 1; i <= n; i++)      //for第一層迴圈(自行設定行數)
								  //i初始值為1，如果i小於等於n，則i加1。
	{
		for (j = 1; j <= i; j++)  //for第二層迴圈(橫列數字遞增)
								  //j初始值為1，如果j小於等於i，則j加1。
			printf("%d", j);           //印出j值，從數字1開始列印。
		printf("\n");             //換行
	}
	//跳出第二個迴圈後，再回到第一個確定有無結束。
	//若沒有結束，則再次執行第二個迴圈。
}