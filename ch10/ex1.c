#include <stdio.h>
#include <stdlib.h> 
//(1a)

//測試scanf函數在輸入字元的缺點
//第二次進行時，為了消除緩衝區的Buffer，因此就直接進行下個指令

void ex1() 
{
	char ch;
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("#%d 的輸入資料為:",i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為:%c\n\n", i, ch);
	}
}
