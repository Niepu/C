#include <stdio.h> 
#include <stdlib.h> 

//���W�P����B��l

void ex3(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++���Ǧ^�Ȭ�%d", a++); //a++ �|�������ӱԭz��A�A�N a ���ȥ[ 1
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b���Ǧ^�Ȭ�%d", ++b); //++a �h�O���� a ���ȥ[ 1 ��A�A�����ӱԭz
	printf(", b=%d\n", b);
}