#include<stdio.h>
#include<stdlib.h>

/*結構變數的初始化是使用一 {} 包圍起來與陣列相同
例:
*/

void ex10()
{
	struct order
	{
		char product[20];
		double price;
		int quantity;
	};
	struct order num[5]; /* = { { "ipad nano",6700.0,20 },
								{"apple",50,10},
								{"banana",20,5},
								{"egg",10,5},
								{ "bag",500,2} }; */

int i,j;
double total1=0, total=0;

	for (i = 0; i < 5; i++)
		{
			printf("輸入產品名稱:");
			scanf("%s", &num[i].product);
			printf("輸入產品價錢:");
			scanf("%lf", &num[i].price);
			printf("輸入訂購數量:");
			scanf("%d", &num[i].quantity);
		}

	for (j = 0; j < 5; j++)
		{
		    total1 = num[j].price * num[j].quantity;
			total = total1 + total;
			printf("產品名稱: %s\n", num[j].product);
			printf("價格: %.lf\n", num[j].price);
			printf("數量: %d\n", num[j].quantity);
			printf("單品總價格: %.lf\n\n", total1);		
		}
	printf("全部總價格: %.1f\n\n", total);
}
