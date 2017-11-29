#include<stdio.h> 
#include<stdlib.h> 
int math();

//利用遞迴和非遞迴函數求兩數的 gcd(最大公因數)

int ex1()
{
	int a, b, c, d, e, ans;
	printf("please input two positive\n");    //輸入兩個數字
	scanf("%d %d", &a, &b);

	d = a;   //讓輸入的數字最後顯示在結果上
	e = b;

	ans = math(d, e);  //回傳副程式，結束時遞迴

	while (b != 0)     //非遞迴直接執行While迴圈
	{
		c = a%b;       //變數a除以變數b的餘數為變數c
		a = b;         //變數b等於變數a
		b = c;		   //變數c等於變數b
	}

	//之後再做一次a除以變數b的餘數為變數c，直到變數b除以自己的餘數變為0時，跳離迴圈


	printf("非遞迴求出值 => %d 和 %d 之最大公因數為%d\n", d, e, a);

	printf("遞回求出值   => %d 和 %d 之最大公因數為%d\n", d, e, ans);

}

int math(a, b)  //回傳副程式，結束時遞迴
{
	int c;
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}