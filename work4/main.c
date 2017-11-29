# include <stdio.h>
# include <stdlib.h>
# include "c.h"

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

void main() {

	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.―ㄢ计 程そ计\n");
		printf("2.瞦计笴栏\n");
		printf("3.﹚竡ㄧ计, 俱计程, 俱计程\n");
		printf("4.禣ん计\n");
		printf("5.聅凝计\n");
		printf("--------------------------------------------------\n");
		printf("叫块璶磅︽郎? 块夹肈计  璶挡祘Α叫0 :");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}