#include<stdio.h>
#include<stdlib.h>
void ex4(void)
{
	float a, b;
	char oper;
	printf("�п�J�B�⦡  (ex:3+2):");
	scanf("%f%c%f", &a, &oper, &b);

	switch (oper)
	{
	case'+':
		printf("%.3f + %.3f = %.3f \n", a, b, a + b);
		break;
	case'-':
		printf("%.3f - %.3f = %.3f \n", a, b, a - b);
		break;
	case'*':
		printf("%.3f * %.3f = %.3f \n", a, b, a * b);
		break;
	case'/':
		printf("%.3f / %.3f = %.3f \n", a, b, a / b);
		break;
	default:
		printf("��J���~");
	}
}