#include<stdio.h>
#include<stdlib.h>

int ex4()
 //換成取小數點到第二位
{
	double d;
	double *p = &d;  
	double **pp = &p;  //原程式double **pp = p;
	printf("請輸入一double數:");
	scanf("%lf", &d);  //原程式scanf("%f", d);        //lf是回傳Double的型別
	printf("d=%.2f , *p=%.2f , and **pp=%.2f \n", d, *p, **pp); //printf("a=%d , *p=%d , and **pp=%d \n", d, *p, **pp);
}