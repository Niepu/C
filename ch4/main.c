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
		printf("1.do while�j�� \n");
		printf("2.�}�C���d�� \n");
		printf("3.�}�C���d�ҸɥR1 \n");
		printf("4.�}�C���d�ҸɥR2 \n");
		printf("5.�}�C���d�ҸɥR3(�O����Ŷ�) \n");
		printf("6.�}�C������-�̤j�̤p�� \n");
		printf("7.�}�C�ɽu���ˬd\n");
		printf("8.�G���}�C\n");
		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�ɮ�? ��J���D�Ʀr  �n�����{���Ы�0 :");
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