#include <stdio.h>
#include <stdlib.h> 
//(1a)

//����scanf��Ʀb��J�r�������I
//�ĤG���i��ɡA���F�����w�İϪ�Buffer�A�]���N�����i��U�ӫ��O

void ex1() 
{
	char ch;
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("#%d ����J��Ƭ�:",i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�:%c\n\n", i, ch);
	}
}
