#include<stdio.h>
#include<stdlib.h>

int ex6()

{
	int i;
	char str[4][20] = { "Department","of","Information","Management" };
	for (i = 0; i < 4; i++) {
		printf("  str +%d = %p\n", i, str + i);
		printf("*(str+%d) = %p\n", i, *(str + i));
		printf(" str [%d] = %p\n", i, str[i]);
	}
}
/*
	�Ѥ@���}�C�o
	* == []
	�ѤG���}�C�o
	str+1 = str[1]=*(str+1)
*/