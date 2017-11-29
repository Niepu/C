#include <stdio.h> 
#include <stdlib.h> 

//遞增與遞減運算子

void ex3(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++的傳回值為%d", a++); //a++ 會先執行整個敘述後，再將 a 的值加 1
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b的傳回值為%d", ++b); //++a 則是先把 a 的值加 1 後，再執行整個敘述
	printf(", b=%d\n", b);
}