#include<stdio.h>
#include<stdlib.h>

int ex1(void)
{
	int i, j, n;
	printf("��J�n�o���:");
	scanf("%d", &n);              //��J��ƪ��ܼ�
	for (i = 1; i <= n; i++)      //for�Ĥ@�h�j��(�ۦ�]�w���)
								  //i��l�Ȭ�1�A�p�Gi�p�󵥩�n�A�hi�[1�C
	{
		for (j = 1; j <= i; j++)  //for�ĤG�h�j��(��C�Ʀr���W)
								  //j��l�Ȭ�1�A�p�Gj�p�󵥩�i�A�hj�[1�C
			printf("%d", j);           //�L�Xj�ȡA�q�Ʀr1�}�l�C�L�C
		printf("\n");             //����
	}
	//���X�ĤG�Ӱj���A�A�^��Ĥ@�ӽT�w���L�����C
	//�Y�S�������A�h�A������ĤG�Ӱj��C
}