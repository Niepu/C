# include <stdio.h>
# include <stdlib.h>

void ex3(void)

{
	int input;

	printf("1~4輸入一個數字:");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("春天\n");
		break;
	case 2:
		printf("夏天\n");
		break;
	case 3:
		printf("秋天\n");
		break;
	case 4:
		printf("冬天\n");
		break;

	default:
		printf("輸入錯誤");
		break;
	}
	system("pause");
	return 0;
}
