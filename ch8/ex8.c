#include<stdio.h>
#include<stdlib.h>

int ex8()

{
	int i,j;
	char *str[13] = {"ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz"};

	for (i = 0; i <= 12; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("       *str=%p\n", (*(str + i) + j));
			printf("      **str=%c\n", *(*(str + i) + j));
		}
	}
}