#include<stdio.h>
#include<stdlib.h>

/* ex3�d�ҧ令�ǥͩm�W�P���Z
*/

void ex5()
{
	struct student
	{
		char mane[20];
		int num;
	};
	struct student stud = { "���j��",90 };

	printf("�ǥͩm�W: %s\n", stud.mane);
	printf("�ǥͦ��Z: %d\n", stud.num);
}