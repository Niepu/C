#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

char input1(char);

void ex10()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
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
			printf("\n��g���ର�j�g�r��:%c\n", C);
		}
		else
		{
			C = C + 32;
			printf("\n��g���ର�p�g�r��:%c\n", C);
		}
	}
	else
		printf("\n%c��J���O�^��r��\n", C);
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