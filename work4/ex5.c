#include <stdio.h>
#include <stdlib.h>
void increase();

//�W�[�s���H�ƪ��{��

int ex5()
{
	int count;
	printf("Testing storage class << static >>\n");
	for (count = 1; count <= 10; count++)               //�]�w�n���X���A���]�s���H��
	{
		printf("#%d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
}
void increase(void)      //��static�������A�h�^���s������
{
	static int si = 0;
	printf("si = %d\n", ++si);
}