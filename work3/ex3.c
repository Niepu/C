# include <stdio.h>
# include <stdlib.h>

void ex3(void)

{
	int input;

	printf("1~4��J�@�ӼƦr:");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("�K��\n");
		break;
	case 2:
		printf("�L��\n");
		break;
	case 3:
		printf("���\n");
		break;
	case 4:
		printf("�V��\n");
		break;

	default:
		printf("��J���~");
		break;
	}
	system("pause");
	return 0;
}
