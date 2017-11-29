#include<stdio.h>
#include<stdlib.h>

int ex3()
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &a;  //&是存放到a位置的意思
	ptr2 = &b;
	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a,&b,ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	*ptr1 = 7;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	*ptr2 = 32;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	a = 17;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	ptr1 = ptr2;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	*ptr1 = 9;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	ptr1 = &a;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	a = 64;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	*ptr2 = *ptr1 + 5;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);

	ptr2 = &a;

	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n\n", a, b, *ptr1, *ptr2);
}












/*
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &a;  //&是存放到a位置的意思
	ptr2 = &b;
	printf("a=%p,b=%p,\n ptr1=%p,ptr2=%p \n", &a, &b, ptr1, ptr2);
	*ptr1 = 7;
	*ptr2 = 32;
	a = 17;
	ptr1 = ptr2;
	*ptr1 = 9;
	ptr1 = &a;
	a = 64;
	*ptr2 = *ptr1 + 5;
	ptr2 = &a;
	printf("a=%2d,b=%2d,*ptr1=%2d,*ptr2=%2d\n", a, b, *ptr1, *ptr2);
	printf("ptr1=%p,ptr2=%p\n", ptr1, ptr2);
}
*/