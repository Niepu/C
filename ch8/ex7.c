#include<stdio.h>
#include<stdlib.h>

int ex7()

{
	char *str[4] = { "abc","def","ghi","jkl" };
	printf("       *str=%p\n",*str);               //���a����Ʀ�m
	printf("      **str=%c\n",**str);              //���a
	printf("     *str+1=%p\n", *str+1);            //���b����Ʀ�m
	printf("    **str+1=%c\n", **str+1);           //���b
	printf("   *(str+2)=%p\n",*(str+2));           //���g����Ʀ�m
	printf("  **(str+2)=%c\n", **(str+2));         //���g
	printf(" *(str+3)+2=%p\n", *(str + 3) + 2);    //���l����Ʀ�m
	printf("**(str+3)+2=%c\n", **(str + 3) + 2);   //���l
}