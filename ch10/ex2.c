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
		printf("#%d ����J��Ƭ�:", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�:%c\n\n", i, ch);

		while (getchar() != '\n')   //scanf()�Pgetchar()���O�w�İϫ�����J���  �i��k1�j
		continue;

		//while (getchar() != '\n');  �i��k2�j
	}
}
