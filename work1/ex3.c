#include <stdio.h>
#include <stdlib.h>
int ex3(void)

// �йB��for�j��, �p��1 + 3 + 5 + �K + 99

{
	int i, a = 1, b=0;                         //�]�T���ܼơA�������a(�����=1)�Mb(�M=0)
	for (i = 1; i < 50; i++)                   //for�j��A�]i��1�A���ư�49������
	{
		a = a + 2;                             // �@�}�l�O 1+2=3   �ĤG�����N�O 3+2=5 �H������......
		b = b + a;                             // �`�M�N�O0+3=3  �ĤG�����N�O 3+5=8 �H������......
	}
	b = b + 1;                                 //����49��������A�����j��A���_�l��1�S���[��A�G�j�鵲���ɥ[1
	printf("1+3+5+...+99 = %d\n", b);          //��ܭp�⵲�G
}

//�ѦҤ���(99-1)/2 +1 = 50 �@��:2500