#include<stdio.h>
#include<stdlib.h>

/*���c�ܼƪ���l�ƬO�ϥΤ@ {} �]��_�ӻP�}�C�ۦP
��:
*/

void ex10()
{
	struct order
	{
		char product[20];
		double price;
		int quantity;
	};
	struct order num[5]; /* = { { "ipad nano",6700.0,20 },
								{"apple",50,10},
								{"banana",20,5},
								{"egg",10,5},
								{ "bag",500,2} }; */

int i,j;
double total1=0, total=0;

	for (i = 0; i < 5; i++)
		{
			printf("��J���~�W��:");
			scanf("%s", &num[i].product);
			printf("��J���~����:");
			scanf("%lf", &num[i].price);
			printf("��J�q�ʼƶq:");
			scanf("%d", &num[i].quantity);
		}

	for (j = 0; j < 5; j++)
		{
		    total1 = num[j].price * num[j].quantity;
			total = total1 + total;
			printf("���~�W��: %s\n", num[j].product);
			printf("����: %.lf\n", num[j].price);
			printf("�ƶq: %d\n", num[j].quantity);
			printf("��~�`����: %.lf\n\n", total1);		
		}
	printf("�����`����: %.1f\n\n", total);
}
