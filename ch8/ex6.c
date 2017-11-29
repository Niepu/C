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
	由一維陣列得
	* == []
	由二維陣列得
	str+1 = str[1]=*(str+1)
*/