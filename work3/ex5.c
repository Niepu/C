#include<stdint.h>
#include<stdlib.h>

void ex5(void)
{
	int i = 1, sum = 0;
	while (sum <= 1000)  //大於1000時跳離迴圈
	{
		sum += i;
		i++;
	}
	printf("%d \n", i - 1);  //種樹問題，最後超過的第二個數字扣掉
}