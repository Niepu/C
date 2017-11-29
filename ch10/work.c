#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

char input(char);

void work()
{
	char ch;
	char a;
	printf("請輸入一個字元: ");
	ch = _getche();
	if (isalpha(ch))
	{
		a = input(ch);
		printf("\n改寫後轉為字母:%c\n", a);
	}
	else
		printf("\n%c輸入不是英文字母\n", ch);
}

char input(char C)

{
		if (C > 'a' - 1 && C < 'z' + 1)
		{
			return C = C - 32;
			
		}
		else
		{
			return C = C + 32;
		}
}