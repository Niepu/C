#include <stdio.h> 
#include <stdlib.h> 

//�_�� if �ԭz���m��

void ex5(void)
{
	int score;
	printf(" Please input a score: ");  //��J�@�ӼƦr
	scanf("%d", &score);


	if (score<60)          /* �p�Gscore<60 */
	{
		if (score >= 50)   /* �p�Gscore>=50 */
			printf(" make up exams \n");
		else
			printf("Fail\n");
	}
	else
		printf("Pass\n");
}