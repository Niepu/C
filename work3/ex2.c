#include<stdint.h>
#include<stdlib.h>

void ex2(void)
{
	int i, j, sum = 0;					//�]�w2���ܼơA�M�`�M�Ȭ�0�C

	do                                  //do while�j��}�l�C
	{
		printf("��J�Ʀr:");
		scanf("%d", &j);                //��J�@�ӼƦr�A�^�ǵ��ܼ�j�C

	} while (j % 2 == 1);                //�p�Gj���W2����1�A�h����do while�j��C
	for (i = 2; i <= j; i = i + 2)      //for�j��Ai��l�Ȭ�2�Ai�p�󵥩��J�ȮɡAi����i�[2
	{
		sum = sum + i;                  //�`�M�q�s�}�l�֥[
	}
	printf("���׬� %d \n", sum);
}