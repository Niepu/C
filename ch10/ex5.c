#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

//(1d改)

void ex5()
{
	char option;
	do
	{
		printf("\n");
		printf("納粹德國海軍\n");
		printf("1) Linienschiffe der Bismarck-Klasse 一番艦 Bismarck \n");
		printf("2) Admiral-Hipper-Klasse             三番艦 Prinz Eugen \n");
		printf("\n");
		printf("大日本帝國海軍\n");
		printf("3) 白露型     二番艦 Shigure \n");
		printf("4) 白露型     四番艦 Yudachi \n");
		printf("5) 改白露型   二番艦 Yamakaze \n");
		printf("6) 改白露型   三番艦 Kawakaze \n");
		printf("7) 島風型     一番艦 Shimakaze \n");
		printf("\n");
		printf("美國海軍\n");
		printf("8) Lexington class     CV-3   Saratoga \n");
		printf("9) Iowa class          BB-61  Iowa \n");
		printf("\n請選擇你要的商品(1..9)或 q 結束程式");
		//option = getche();  【方法一】
		//【方法二】↓
		option = getchar();
		while (getchar() != '\n');
		switch (option)
		{
		case '1':printf("\n您要的商品是 Bismarck \n");
			break;
		case '2':printf("\n您要的商品是 Prinz Eugen \n");
			break;
		case '3':printf("\n您要的商品是 Shigure \n");
			break;
		case '4':printf("\n您要的商品是 Yudachi \n");
			break;
		case '5':printf("\n您要的商品是 Yamakaze \n");
			break;
		case '6':printf("\n您要的商品是 Kawakaze \n");
			break;
		case '7':printf("\n您要的商品是 Shimakaze \n");
			break;
		case '8':printf("\n您要的商品是 CV-3   Saratoga \n");
			break;
		case '9':printf("\n您要的商品是 BB-61  Iowa \n");
			break;
		case 'q': exit(0);

		default:printf("\n查無此商品，請重新輸入!!! \n");
		}
	} while (option != 'q');
}