# include <stdio.h>
# include <stdlib.h>
# include "c.h"


void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();


void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.跳脫序列與格式碼的應用 \n");
		printf("2.餘數運算子  \n");
		printf("3.遞增與遞減運算子  \n");
		printf("4.邏輯運算子  \n");
		printf("5.巢狀 if 敘述的練習  \n");
		printf("6.if-else-if 敘述的應用(分數判斷)  \n");
		printf("7.條件運算子的範例    \n");
		printf("8.switch 敘述的範例   \n");
		printf("9.while迴圈的範例     \n");
		printf("10.以巢狀while迴圈改寫九九乘法表  \n");

		printf("--------------------------------------------------\n");
		printf("請輸入要執行的檔案? 輸入標題數字1~10  要結束程式請按0 :");
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
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
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