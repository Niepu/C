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
void ex11();
void ex12();
void ex13();
void ex14();



void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.結構變數的定義與使用範例1 \n");
		printf("2.結構變數的定義與使用範例2 \n");
		printf("3.結構變數的定義與使用範例3 \n");
		printf("4. 改範例2\n");
		printf("5. 改範例3\n");
		printf("6.結構與指標  結構指標變數 ->結構成員 \n");
		printf("7.結構指標變數函數 \n");
		printf("8.結構陣列的定義與一般陣列相同 \n");
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
		case 11:
			ex11();
			break;
		case 12:
			ex12();
			break;
		case 13:
			ex13();
			break;
		case 14:
			ex14();
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