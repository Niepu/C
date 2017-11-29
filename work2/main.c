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
		printf("1. 輸入判斷奇偶數 \n");
		printf("2. 溫度轉換  \n");
		printf("3. 判斷溫度給答案  \n");
		printf("4. 買飲料問題1  \n");
		printf("5. 買飲料問題2   \n");
		printf("6. 列印星號  \n");

		printf("--------------------------------------------------\n");
		printf("請輸入要執行的檔案? 輸入標題數字1~6要結束程式請按0 :");
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