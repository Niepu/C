#include<stdio.h> 
#include<stdlib.h> 
#define F printf(" %d ", F0);
#define Ftion Fibonacci()      //�Ƶ{��

int Ftion;

int i,x;               //���]�w�����ܼ�

//�O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1, �h�O��ƦC��:
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

int ex4()
{
	printf("\n��J�O��ƦC��ĴX��\n");
	scanf("%d", &x);
	printf("�����j��\n");
	Ftion;
	printf("\n");
	printf("�S�����j��\n");
	int F0 = 0, F1 = 1, F2;    //�S�����j�B��

	for (i = 1; i <= x; i++)   //�ĤG��ơA�}�l�O��ƦC�B��
	{
		F2 = F1 + F0;
		F1 = F0;
		F0 = F2;
		printf(" %d ", F0);

	}
}

int Ftion   //�Ƶ{���A���j���G
{
	int F0=0,F1=1,F2;

	for (i = 1; i <= x; i++)   //�ĤG��ơA�}�l�O��ƦC�B��
	{
		F2 = F1 + F0;
		F1 = F0;
		F0 = F2;
		printf(" %d ", F0);

	}
	return F0;
}



/*
int Fibonacci()   //�����D�حn�DF=1,F1=1���@�k
{
	int F0=0,F1=1,F2;


	for (i = 1; i <= x; i++)
	{
		printf(" %d ",F0);
		F2 = F1 + F0;
		F1 = F;
		F0 =F2;

	}
	return F;
}
*/