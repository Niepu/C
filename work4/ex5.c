#include <stdio.h>
#include <stdlib.h>
void increase();

//增加瀏覽人數的程式

int ex5()
{
	int count;
	printf("Testing storage class << static >>\n");
	for (count = 1; count <= 10; count++)               //設定要做幾次，假設瀏覽人數
	{
		printf("#%d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
}
void increase(void)      //用static的概念，去回傳瀏覽次數
{
	static int si = 0;
	printf("si = %d\n", ++si);
}