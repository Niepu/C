#include<stdio.h>
#include<stdlib.h>

void ex12()
{
	struct node
	{
		char name[20];
		int score;
		struct node *next;
	}; 
	struct node *ptr1, *ptr2, *ptr3, *current;
	
	ptr1 = (struct node *) malloc(sizeof(struct node));
	printf("請輸入 ptr1 節點的姓名: ");
	scanf("%s", &ptr1->name);
	printf("請輸入 ptr1 節點的分數: ");
	scanf("%d", &ptr1->score);
	ptr2 = (struct node *) malloc(sizeof(struct node));
	printf("\n請輸入 ptr2 節點的姓名: ");
	scanf("%s", &ptr2->name);
	printf("請輸入 ptr2 節點的分數: ");
	scanf("%d", &ptr2->score);

	ptr1->next = ptr2;
	ptr3= (struct node *) malloc(sizeof(struct node));
	printf("\n請輸入 ptr3 節點的姓名: ");
	scanf("%s", &ptr3->name);
	printf("請輸入 ptr3 節點的分數: ");
	scanf("%d", &ptr3->score);

	ptr3->next = NULL;

	ptr2->next = ptr3;

	current = ptr1;
	printf("\n\n縺結串列的資料如下:\n");

	while (current != NULL) {
		printf("%10s ", current->name);
		printf("%5d\n ", current->score);

		current = current->next;
	}
}