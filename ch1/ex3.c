#include<stdio.h>
#include<stdlib.h>

//溢位(overflow)

void ex3(void)  //溢位是因為short的範圍是-32768~32767，因此超過時，則會從-32768開始算
{
	short sum, s = 32767;
	sum = s + 1;
	printf("s+1= %d \n", sum);  //結果為-32768
	sum = s + 2;
	printf("s+2=%d\n", sum);    //結果為-32767
}