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
		printf("2.\n");
		printf("3.\n");
		printf("4.\n");
		printf("5. \n");
		printf("6.\n");
		printf("7. \n");
		printf("8. \n");
		printf("9. \n");
		printf("10. \n");
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