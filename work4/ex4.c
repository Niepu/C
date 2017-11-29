#include<stdio.h> 
#include<stdlib.h> 
#define F printf(" %d ", F0);
#define Ftion Fibonacci()      //副程式

int Ftion;

int i,x;               //先設定全域變數

//費氏數列的規則為某一項的值為其前二項的和, 假設 F0=1, F1=1, 則費氏數列為:
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

int ex4()
{
	printf("\n輸入費氏數列到第幾位\n");
	scanf("%d", &x);
	printf("有遞迴的\n");
	Ftion;
	printf("\n");
	printf("沒有遞迴的\n");
	int F0 = 0, F1 = 1, F2;    //沒有遞迴運算

	for (i = 1; i <= x; i++)   //第二位數，開始費氏數列運算
	{
		F2 = F1 + F0;
		F1 = F0;
		F0 = F2;
		printf(" %d ", F0);

	}
}

int Ftion   //副程式，遞迴結果
{
	int F0=0,F1=1,F2;

	for (i = 1; i <= x; i++)   //第二位數，開始費氏數列運算
	{
		F2 = F1 + F0;
		F1 = F0;
		F0 = F2;
		printf(" %d ", F0);

	}
	return F0;
}



/*
int Fibonacci()   //不管題目要求F=1,F1=1的作法
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