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
		printf("1.����ǦC�P�榡�X������ \n");
		printf("2.�l�ƹB��l  \n");
		printf("3.���W�P����B��l  \n");
		printf("4.�޿�B��l  \n");
		printf("5.�_�� if �ԭz���m��  \n");
		printf("6.if-else-if �ԭz������(���ƧP�_)  \n");
		printf("7.����B��l���d��    \n");
		printf("8.switch �ԭz���d��   \n");
		printf("9.while�j�骺�d��     \n");
		printf("10.�H�_��while�j���g�E�E���k��  \n");

		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�ɮ�? ��J���D�Ʀr1~10  �n�����{���Ы�0 :");
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