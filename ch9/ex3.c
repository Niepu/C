#include<stdio.h>
#include<stdlib.h>

/*���c�ܼƪ���l�ƬO�ϥΤ@ {} �]��_�ӻP�}�C�ۦP
  ��:
*/

void ex3()
{
	struct order
	{
		char product[20];
		double price;
		int quantity;
	};
	struct order num1 = {"ipad nano",6700.0,20};
	struct order num2;
	double total1, total2;

	total1 = num1.price * num1.quantity;

	printf("��J���~�W��:\n");
	scanf("%s",&num2.product);
	printf("��J���~����:\n");
	scanf("%lf", &num2.price);
	printf("��J�q�ʼƶq:\n");
	scanf("%d",&num2.quantity);
	
	total2 = num2.price * num2.quantity;
	printf("\n<<�q��C��>>\n");
	printf("���~�W��: %s\n",num1.product);
	printf("����: %.lf\n",num1.price);
	printf("�ƶq: %d\n",num1.quantity);
	printf("�`����: %.lf\n\n",total1);

	printf("���~�W��: %s\n", num2.product);
	printf("����: %.lf\n", num2.price);
	printf("�ƶq: %d\n", num2.quantity);
	printf("�`����: %.lf\n\n", total2);

}