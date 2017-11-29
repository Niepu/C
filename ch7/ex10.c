#include<stdio.h>
#include<stdlib.h>

int ex10()
{
	int a[5] = { 5,7,9,11,13 };
	printf("a[0]=%d,*(a+0)=%d\n", a[0], *(a + 0));
	printf("a[1]=%d,*(a+1)=%d\n", a[1], *(a + 1));
	printf("a[2]=%d,*(a+2)=%d\n", a[2], *(a + 2));
	printf("a[3]=%d,*(a+3)=%d\n", a[3], *(a + 3));
	printf("a[4]=%d,*(a+4)=%d\n", a[4], *(a + 4));
}