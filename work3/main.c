# include <stdio.h>
# include <stdlib.h>
# include "c.h"


void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();

void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.試利用巢狀迴圈撰寫出1,12,123,1234......的程式 \n");
		printf("2.請利用do while迴圈，計算 的總和，在判斷輸入奇偶數 \n");
		printf("3.由鍵盤輸入數值1~4的季節 \n");
		printf("4.利用while迴圈印出5~20之間所有整數的平方值，在相加 \n");
		printf("5.試利用while迴圈找出最小的n值，使得 的總和大於等於1000 \n");
		printf("6.試利用巢狀for迴圈印出九九乘法表\n");
		printf("--------------------------------------------------\n");
		printf("請輸入要執行的作業? 輸入1-6  要結束程式請按0 :");
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