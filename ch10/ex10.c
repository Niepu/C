#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

char input1(char);

void ex10()
{
	char ch;
	printf("請輸入一個字元: ");
	ch = _getche();
	input(ch);
}

char input1(char C)

{
	if (isalpha(C))
	{
		if (C > 'a'-1 &&C < 'z'+1)
		{
			C = C - 32;
			printf("\n改寫後轉為大寫字母:%c\n", C);
		}
		else
		{
			C = C + 32;
			printf("\n改寫後轉為小寫字母:%c\n", C);
		}
	}
	else
		printf("\n%c輸入不是英文字母\n", C);
		return C;
}


/*
char Toupper(char ch)
{
return (ch>91)? ch-32:ch;
}
char Toupper(char ch)
{
return (ch<91)? ch+32:ch;
}
*/