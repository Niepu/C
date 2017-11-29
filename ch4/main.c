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
		printf("1.do while迴圈 \n");
		printf("2.陣列的範例 \n");
		printf("3.陣列的範例補充1 \n");
		printf("4.陣列的範例補充2 \n");
		printf("5.陣列的範例補充3(記憶體空間) \n");
		printf("6.陣列的應用-最大最小值 \n");
		printf("7.陣列界線的檢查\n");
		printf("8.二維陣列\n");
		printf("--------------------------------------------------\n");
		printf("請輸入要執行的檔案? 輸入標題數字  要結束程式請按0 :");
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