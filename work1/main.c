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
		printf("1.�L�X�r�� \n");
		printf("2.�]X1,X2,X3���XBanana \n");
		printf("3.��For�j��1+2+3...+99 \n");
		printf("4.��For�j��p��1^1+2^2+...10^10 \n");

		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�@�~? ��J1-4  �n�����{���Ы�0 :");
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
