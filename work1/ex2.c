#include <stdio.h>
#include <stdlib.h>

//設x1 = a, x2 = b, x3 = n請用x1, x2, x3列印出banana

int ex2(void)
{
	char x1 = 'a' ,x2 = 'b', x3 = 'n';                            //字元char配合'文字'(單引號)的運用
	printf("%c%c%c%c%c%c\n", x2, x1, x3, x1, x3, x1);             //進而回傳到printf裡，用%c來顯示
}
