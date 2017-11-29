#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void ex9()
{
	char ch;

	printf("請輸入一個英文字母:");
	ch = _getche();
	printf("\n此字母的大寫是 %c\n",toupper(ch));
	printf("此字母的小寫是%c\n",tolower(ch));
}