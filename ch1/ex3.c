#include<stdio.h>
#include<stdlib.h>

//����(overflow)

void ex3(void)  //����O�]��short���d��O-32768~32767�A�]���W�L�ɡA�h�|�q-32768�}�l��
{
	short sum, s = 32767;
	sum = s + 1;
	printf("s+1= %d \n", sum);  //���G��-32768
	sum = s + 2;
	printf("s+2=%d\n", sum);    //���G��-32767
}