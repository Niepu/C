#include<stdio.h>
#include<stdlib.h>

/* ���c�ܼƪ���l�ƬO�ϥΤ@ {} �]��_�ӻP�}�C�ۦP
   ��:struct employee *ptr = &general;
*/

void ex6()
{
	struct employee
	{
		char id[7];
		char name[20];
		int salary;
	};
	struct employee general = { "D62128","Johnson",39000 };
	struct employee *ptr = &general;

	printf("<<�ϥ�->�B��l���o�U���c����>>\n");
	printf("ID number:%s\n",ptr->id);
	printf("Employee Name:%s\n",ptr->name);
	printf("Salary: %d\n\n",ptr->salary);

	printf("<<�ϥ�(*).�B��l���o�U���c����>>\n");
	printf("ID number:%s\n", (*ptr).id);
	printf("Employee Name:%s\n", (*ptr).name);
	printf("Salary: %d\n\n", (*ptr).salary);

}