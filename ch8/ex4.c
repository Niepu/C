#include<stdio.h>
#include<stdlib.h>

int ex4()
 //�������p���I��ĤG��
{
	double d;
	double *p = &d;  
	double **pp = &p;  //��{��double **pp = p;
	printf("�п�J�@double��:");
	scanf("%lf", &d);  //��{��scanf("%f", d);        //lf�O�^��Double�����O
	printf("d=%.2f , *p=%.2f , and **pp=%.2f \n", d, *p, **pp); //printf("a=%d , *p=%d , and **pp=%d \n", d, *p, **pp);
}