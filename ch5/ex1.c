#include <stdio.h>
#include <stdlib.h>
void ex1()
{
	int i, j, sale[2][4], sum = 0;     /*�]�w2���ܼơA1�Ӱ}�C��ơA
									   �`�M0���ܼ�*/
	for (i = 0; i<2; i++)              /*��for�j��A�ӿ�J�G���}�C��
									   �Ĥ@�C*/
		for (j = 0; j<4; j++)          /*��for�j��A�ӿ�J�G���}�C��
									   �ĤG�C*/
		{
			printf("�~�ȭ�%d ��%d�u  �~�Z:", i + 1, j + 1);

			/*�]�w���D���ơA���[1�h�|��ܹs�A���ŦX�H������A�G�[1*/

			scanf("%d", &sale[i][j]);  /* �g�J�P��q */
		}
	printf("***Output***");            /*��X�`���лy*/
	for (i = 0; i<2; i++)              /*��for��X�P��q�íp���`�P��q*/
	{								   /*��X��ơA�~�ȭ�1�M�~�ȭ�2 */
		printf("\n�~�ȭ�%d �C�u���~�Z:", i + 1);
		for (j = 0; j<4; j++)          /*��X�C�ơA�C�u���~�Z���*/
		{
			printf("%d ", sale[i][j]); /*�ΰ}�C��F�X���G��*/
			sum += sale[i][j];
		}
	}
	printf("\n2015 results for the total sales volume of %d cars \n", sum);
}