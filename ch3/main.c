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

void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.遞增與遞減運算式子\n");
		printf("2.條件運算子的範例\n");
		printf("3.巢狀 if 敘述的練習\n");
		printf("4.switch敘述的範例\n");
		printf("5.switch迴圈的範例\n");
		printf("6.以巢狀while迴圈改寫九九乘法表\n");
		printf("7.以巢狀迴圈印出三角形\n");
		printf("8.以巢狀迴圈反印數字\n");
		printf("--------------------------------------------------\n");
		printf("請輸入要執行的範例? 輸入1-8  要結束程式請按0 :");
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