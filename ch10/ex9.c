#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void ex9()
{
	char ch;

	printf("�п�J�@�ӭ^��r��:");
	ch = _getche();
	printf("\n���r�����j�g�O %c\n",toupper(ch));
	printf("���r�����p�g�O%c\n",tolower(ch));
}