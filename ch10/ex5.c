#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

//(1d��)

void ex5()
{
	char option;
	do
	{
		printf("\n");
		printf("�Ǻ�w����x\n");
		printf("1) Linienschiffe der Bismarck-Klasse �@�fĥ Bismarck \n");
		printf("2) Admiral-Hipper-Klasse             �T�fĥ Prinz Eugen \n");
		printf("\n");
		printf("�j�饻�Ұ���x\n");
		printf("3) ���S��     �G�fĥ Shigure \n");
		printf("4) ���S��     �|�fĥ Yudachi \n");
		printf("5) ����S��   �G�fĥ Yamakaze \n");
		printf("6) ����S��   �T�fĥ Kawakaze \n");
		printf("7) �q����     �@�fĥ Shimakaze \n");
		printf("\n");
		printf("������x\n");
		printf("8) Lexington class     CV-3   Saratoga \n");
		printf("9) Iowa class          BB-61  Iowa \n");
		printf("\n�п�ܧA�n���ӫ~(1..9)�� q �����{��");
		//option = getche();  �i��k�@�j
		//�i��k�G�j��
		option = getchar();
		while (getchar() != '\n');
		switch (option)
		{
		case '1':printf("\n�z�n���ӫ~�O Bismarck \n");
			break;
		case '2':printf("\n�z�n���ӫ~�O Prinz Eugen \n");
			break;
		case '3':printf("\n�z�n���ӫ~�O Shigure \n");
			break;
		case '4':printf("\n�z�n���ӫ~�O Yudachi \n");
			break;
		case '5':printf("\n�z�n���ӫ~�O Yamakaze \n");
			break;
		case '6':printf("\n�z�n���ӫ~�O Kawakaze \n");
			break;
		case '7':printf("\n�z�n���ӫ~�O Shimakaze \n");
			break;
		case '8':printf("\n�z�n���ӫ~�O CV-3   Saratoga \n");
			break;
		case '9':printf("\n�z�n���ӫ~�O BB-61  Iowa \n");
			break;
		case 'q': exit(0);

		default:printf("\n�d�L���ӫ~�A�Э��s��J!!! \n");
		}
	} while (option != 'q');
}