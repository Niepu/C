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
		printf("1. \n");
		printf("2. \n");
		printf("3. \n");
		printf("4.\n");
		printf("5.\n");
		printf("--------------------------------------------------\n");
		printf("請輸入要執行的檔案? 輸入標題數字  要結束程式請按0 :");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			//ex2();
			break;
		case 3:
			//ch5_3();
			break;
		case 4:
			//ch5_4();
			break;
		case 5:
			//ch5_5();
			break;
		case 6:
			//ch5_6();
			break;
		case 7:
			//ch5_7();
			break;
		case 8:
			//ch5_8();
			break;
		case 9:
			//ch5_9();
			break;
		case 10:
			//ch5_10();
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