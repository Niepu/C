#include <stdio.h> 
#include <stdlib.h> 

//�޿�B��l

void ex4(void)
{
	int score;
	printf("Please input a score:");
	scanf("%d", &score);
	if ((score<0) || (score>100))		//�Y���Z�W�X0��100�����A�N��ܿ��~(�Ϊ��O��OR )
		printf("input error!!\n");
	if ((score<60) && (score>49))		//�Y���Z����50��59�����A�N��ܦA�[�o(�Ϊ��O�MAND)
		printf("make up exams!!\n");
}