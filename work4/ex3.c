#include<stdio.h>
#include<stdlib.h>
int big(int, int, int);
int small(int, int, int);
int max, min;

//ㄏ﹚竡ㄧ计, 俱计程, 俱计程

int ex3(void)
{
	int num1, num2, num3;
	int ans1, ans2;

	printf("\n");
	printf("计ゑ祘Α\n\n");
	printf("叫块计\n\n");
	printf("叫块计: ");
	scanf("%d", &num1);
	printf("叫块计: ");
	scanf("%d", &num2);
	printf("叫块计: ");
	scanf("%d", &num3);

	ans1 = big(num1, num2, num3);
	ans2 = small(num1, num2, num3);

	printf("The maximum value of the array element: %d\n", ans1);
	printf("The minimum value of the array element: %d\n", ans2);

}

int big(int a, int b, int c)  //程耞Α
{
	if (a > b & a > c)
		max = a;
	if (b > a & b > c)
		max = b;
	if (c > a & c > b)
		max = c;
	return max;
}

int small(int a, int b, int c)  //程耞Α
{
	if (a < b & a < c)
		min = a;
	if (b < a & b < c)
		min = b;
	if (c < a & c < b)
		min = c;
	return min;
}