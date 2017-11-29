#include <stdio.h> 
#include <stdlib.h> 
void ex8(void)
{
	float a, b;
	char oper;
	printf("Please input the expression:(ex:3+2):");
	scanf("%f %c %f", &a, &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%f+%f=%f\n", a, b, a + b);
		break;

	case '-':
		printf("%f-%f=%f\n", a, b, a - b);
		break;

	case '*':
		printf("%f*%f=%f\n", a, b, a*b);
		break;

	case '/':
		printf("%f/%f=%.3f\n", a, b, a / b);
		break;
	default:
		printf("input error!!\n");
	}
}