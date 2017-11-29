#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h> 


//(2a)

void ex6()
{
	char ch;
	printf("請輸入一個字元: ");
	ch = _getche();
	if (isalnum(ch))
		printf("\n%c 是一英文字母或數字\n", ch);
	else
		printf("\n%c不是一英文字母或數字\n",ch);
}