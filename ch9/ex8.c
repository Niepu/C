#include<stdio.h>
#include<stdlib.h>

//�Q��[���c�}�C]�s�����
//���c�}�C��ȳ]�w�A�ϥΤj�A��{},���w�C���������ȡA��Ƥ����H�r��`,'�j�}
//�}�C���c�O�@���ܼơA�ҥH�ϥ�"�I"�B��l�s�����c����
//ex:classes[���}].id,classes[���}].name,classes[���}].score

int ex8()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	struct student classes[5] = {{ 10811,"John",88.0 },
								{ 10812,"Coco",82.0 },
								{ 10813,"Jack",76.5 },
								{ 10814,"Tina",91.0 },
								{ 10815,"Bob",61.5 } };
		int i;
		printf(" �ǥͦW��p�U\n");
		printf(" ----------\n\n");
		printf("�Ǹ�  �m�W ����\n");

		for (i = 0; i < 5; i++)
		{
			printf("%d %-10s %5.lf\n",
				classes[i].id,
				classes[i].name,
				classes[i].score);
		}
}



