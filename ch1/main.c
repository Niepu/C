# include <stdio.h>
# include <stdlib.h>
# include "c.h"


void ex1();
void ex2();
void ex3();
void ex4();
void ex5();


void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.第一個C程式語言 \n");
		printf("2.程式區塊及本體 \n");
		printf("3.溢位練習 \n");
		printf("4.控制輸出欄位的寬度 \n");
		printf("5.輸入函數scanf() \n");
		printf("--------------------------------------------------\n");
		printf("請輸入要執行的檔案? 輸入標題數字1~5  要結束程式請按0 :");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 0:
			flag = 0;
			break;

		default:
			break;
		}
		system("pause");
		system("cls");
	}
}