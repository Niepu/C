#include <stdio.h> 
#include <stdlib.h>

//����B��l���d��

void ex7(void)
{
	int num1, num2, larger;
	printf("Please input two integers: :");
	scanf("%d %d", &num1, &num2);
	num1>num2 ? (larger = num1) : (larger = num2); //����P�_�A�p�Gnum1�j��num2�A��larger�N�|����num1�A�_�h����num2
	printf("%d greater value \n", larger);
}