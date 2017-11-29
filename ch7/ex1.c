#include<stdio.h>
#include<stdlib.h>

int ex1()

{
	int *ptr,num= 20;
	ptr = &num;
	printf("num=%d,&num=%p\n", num, &num);
	printf("*ptr%d,ptr=%p,&ptr=%p\n",*ptr,ptr,&ptr);
}

//int num = 20;
//int *ptr = &num;