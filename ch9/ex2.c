#include<stdio.h>
#include<stdlib.h>

/*�D�n�O�n���աA���{����"."�ηN�A�����Ʀs����Ӧ�m���g�k */

void ex2()
{
	struct triangle
	{
		int length, height;
		double area;
	};

	struct triangle tri;
	printf("�п�J�T���Ϊ���");
	scanf("%d", &tri.length);
	printf("�п�J�T���Ϊ��e");
	scanf("%d", &tri.height);
	tri.area = tri.length * tri.height / 2.0;
	printf("�T���Ϊ����n��%.2lf \n", tri.area);

}