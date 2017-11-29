# include <stdio.h>
# include <stdlib.h>
# include "c.h"


void ex1();
void ex2();
void ex3();
void ex4();

void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.印出字串 \n");
		printf("2.設X1,X2,X3拼出Banana \n");
		printf("3.用For迴圈1+2+3...+99 \n");
		printf("4.用For迴圈計算1^1+2^2+...10^10 \n");

		printf("--------------------------------------------------\n");
		printf("請輸入要執行的作業? 輸入1-4  要結束程式請按0 :");
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
