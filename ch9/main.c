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
		printf("1.���c�ܼƪ��w�q�P�ϥνd��1 \n");
		printf("2.���c�ܼƪ��w�q�P�ϥνd��2 \n");
		printf("3.���c�ܼƪ��w�q�P�ϥνd��3 \n");
		printf("4. ��d��2\n");
		printf("5. ��d��3\n");
		printf("6.���c�P����  ���c�����ܼ� ->���c���� \n");
		printf("7.���c�����ܼƨ�� \n");
		printf("8.���c�}�C���w�q�P�@��}�C�ۦP \n");
		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�ɮ�? ��J���D�Ʀr1~5  �n�����{���Ы�0 :");
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