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
		printf("1. ��J�P�_�_���� \n");
		printf("2. �ū��ഫ  \n");
		printf("3. �P�_�ū׵�����  \n");
		printf("4. �R���ư��D1  \n");
		printf("5. �R���ư��D2   \n");
		printf("6. �C�L�P��  \n");

		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�ɮ�? ��J���D�Ʀr1~6�n�����{���Ы�0 :");
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