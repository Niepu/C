# include <stdio.h>
# include <stdlib.h>
# include "c.h"

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.�D��ƪ� �̤j���]��\n");
		printf("2.�q�Ʀr�C��\n");
		printf("3.�w�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��\n");
		printf("4.�O��ƦC\n");
		printf("5.�s���H��\n");
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