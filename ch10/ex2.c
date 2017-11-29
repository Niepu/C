#include <stdio.h>
#include <stdlib.h> 

//(1b)
//
void ex2()
{
	char ch;
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("#%d 的輸入資料為:", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為:%c\n\n", i, ch);

		while (getchar() != '\n')   //scanf()與getchar()都是緩衝區型的輸入函數  【方法1】
		continue;

		//while (getchar() != '\n');  【方法2】
	}
}
