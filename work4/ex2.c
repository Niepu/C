#include <stdio.h>
#include <stdlib.h>
int init();
int getans1();
int getans2();
int getans3();
int compare(int, int, int, int);
int a, b, c, d,q,x;
int a1, b1, b2, b3, c1;

//�]�p�@�q�Ʀr�C��, ���w�q init ��� t ���o����, �A�w�q getans ���, 
//���o�ϥΪ̿�J������, �̫�A�w�q compare ���, ������׬O�_���T�C

void ex2(void)
{
	printf("\n�üƲq�Ʀr�C��\n");
	printf("���{���i�H�ۦ��J�Q�q���X�ӼƦr��\n");
	printf("�C�@���q����3�����|�A�ҥH�ۤv�]�w���קa!\n");
	printf("��J�A�n�q���d��(Ex,��J50�N�O�q1~50���ü�) �H������\n");
	printf("�ҥH�п�J�A�n�q���d�� :");
	scanf("%d",&x);
	q = init(x);
	b1 = getans1();
	b2 = getans2();
	b3 = getans3();
	compare(q, b1, b2, b3);
}

int init(x)   //�üƲ��;�
{
	a = (rand() % x) + 1;
	return a;
}

int getans1()  //�q�Ĥ@��
{
	printf("1~%d��J�Ĥ@�ӭn�q���Ʀr: ",x);
	scanf("%d", &b);
	return b;
}

int getans2()  //�q�ĤG��
{
	printf("1~%d��J�ĤG�ӭn�q���Ʀr: ", x);
	scanf("%d", &c);
	return c;
}

int getans3()  //�q�ĤT��
{
	printf("1~%d��J�ĤT�ӭn�q���Ʀr: ", x);
	scanf("%d", &d);
	return d;
}

int compare(q, a, b, c)  //�����D�ػP�q�����G�O�_�ۦP
{
	if(a>q || b>q || c>q)
		printf("�z����J�W�X�d�򪺭ȳ�\n");
	else if(q==a)
		printf("\n���߲Ĥ@������!!!���״N�O%d\n", q);
	else if(q==b)
		printf("\n���߲ĤG������!!!���״N�O%d\n", q);
	else if(q==c)
		printf("\n���߲ĤT������!!!���״N�O%d\n", q);
	else
		printf("�����q���A���׬O%d\n", q);
}


/*{
	if (q == a || q == b || q == c)

		printf("\n���ߵ���!!!���״N�O%d\n", q);
	else
		printf("�����q���A���׬O%d\n", q);
}*/

//��²�檺�P�_��k�A�S���޲ĴX���q�諸��k