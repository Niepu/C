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
		printf("1.�էQ�α_���j�鼶�g�X1,12,123,1234......���{�� \n");
		printf("2.�ЧQ��do while�j��A�p�� ���`�M�A�b�P�_��J�_���� \n");
		printf("3.����L��J�ƭ�1~4���u�` \n");
		printf("4.�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�b�ۥ[ \n");
		printf("5.�էQ��while�j���X�̤p��n�ȡA�ϱo ���`�M�j�󵥩�1000 \n");
		printf("6.�էQ�α_��for�j��L�X�E�E���k��\n");
		printf("--------------------------------------------------\n");
		printf("�п�J�n���檺�@�~? ��J1-6  �n�����{���Ы�0 :");
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