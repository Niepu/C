#include<stdint.h>
#include<stdlib.h>

void ex5(void)
{
	int i = 1, sum = 0;
	while (sum <= 1000)  //�j��1000�ɸ����j��
	{
		sum += i;
		i++;
	}
	printf("%d \n", i - 1);  //�ؾ���D�A�̫�W�L���ĤG�ӼƦr����
}