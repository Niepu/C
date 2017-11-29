#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h> 


//(2b)

void ex7()
{
	char ch;
	printf("請輸入一個字元: ");
	ch = _getche();
	if (isalpha(ch))
		printf("\n%c 是一英文字母\n", ch);
	else if(isdigit(ch))
		printf("\n%c 是一數字\n", ch);
	else
		printf("\n%c不是一英文字母或數字\n", ch);
}