#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
//(1c)

void output(char);

void ex3()
{
	char ch;

	printf("\n\n...使用 getch()...\n");
	printf("請輸入一字元: ");
	ch = _getch();
	output(ch);

	printf("\n\n...使用 getche()...\n");
	printf("請輸入一字元: ");
	ch = _getche();
	output(ch);

	printf("\n\n...使用 getchar()...\n");
	printf("請輸入一字元: ");
	ch = getchar();
	output(ch);
	printf("\n");
}

void output(char c) 
{
	printf("\n使用 putchar()輸出字元: ");
	putchar(c);
}
