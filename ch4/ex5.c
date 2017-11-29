#include<stdio.h>
#include<stdlib.h>

void ex5()
{
	double num1[6] = { 11.1 ,22.2 ,33.3 ,44.4 ,55.5,66.6 };
	int num2[] = { 10,20,30,40,50,60 };
	int i;

	for (i = 0; i < 6; i++)
	{
		printf("num1[%d]=%.1f\n", i, num1[i]);
		printf("\n\n");
	}
	for (i = 0; i < 6; i++)
	{
		printf("num2[%d]=%d\n",i,num2[i]);
	}
	printf("\nnum1°}¦C¦û %d bytes \n", sizeof(num1));
	printf("num2°}¦C¦û %d bytes\n", sizeof(num2));
}