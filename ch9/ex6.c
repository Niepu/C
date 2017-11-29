#include<stdio.h>
#include<stdlib.h>

/* 結構變數的初始化是使用一 {} 包圍起來與陣列相同
   例:struct employee *ptr = &general;
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

	printf("<<使用->運算子取得各結構元素>>\n");
	printf("ID number:%s\n",ptr->id);
	printf("Employee Name:%s\n",ptr->name);
	printf("Salary: %d\n\n",ptr->salary);

	printf("<<使用(*).運算子取得各結構元素>>\n");
	printf("ID number:%s\n", (*ptr).id);
	printf("Employee Name:%s\n", (*ptr).name);
	printf("Salary: %d\n\n", (*ptr).salary);

}