#include<stdio.h>
#include<stdlib.h>

int ex7()

{
	char *str[4] = { "abc","def","ghi","jkl" };
	printf("       *str=%p\n",*str);               //抓到a的資料位置
	printf("      **str=%c\n",**str);              //顯示a
	printf("     *str+1=%p\n", *str+1);            //抓到b的資料位置
	printf("    **str+1=%c\n", **str+1);           //顯示b
	printf("   *(str+2)=%p\n",*(str+2));           //抓到g的資料位置
	printf("  **(str+2)=%c\n", **(str+2));         //顯示g
	printf(" *(str+3)+2=%p\n", *(str + 3) + 2);    //抓到l的資料位置
	printf("**(str+3)+2=%c\n", **(str + 3) + 2);   //顯示l
}