#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

char input(char);

void work()
{
	char ch;
	char a;
	printf("�п�J�@�Ӧr��: ");
	ch = _getche();
	if (isalpha(ch))
	{
		a = input(ch);
		printf("\n��g���ର�r��:%c\n", a);
	}
	else
		printf("\n%c��J���O�^��r��\n", ch);
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