#include <stdio.h>
#include <stdlib.h>
int init();
int getans1();
int getans2();
int getans3();
int compare(int, int, int, int);
int a, b, c, d,q,x;
int a1, b1, b2, b3, c1;

//設計一猜數字遊戲, 先定義 init 函數 t 取得答案, 再定義 getans 函數, 
//取得使用者輸入的答案, 最後再定義 compare 函數, 比較答案是否正確。

void ex2(void)
{
	printf("\n亂數猜數字遊戲\n");
	printf("本程式可以自行輸入想猜的幾個數字喔\n");
	printf("每一次猜都有3次機會，所以自己設定難度吧!\n");
	printf("輸入你要猜的範圍(Ex,輸入50就是猜1~50的亂數) 以此類推\n");
	printf("所以請輸入你要猜的範圍 :");
	scanf("%d",&x);
	q = init(x);
	b1 = getans1();
	b2 = getans2();
	b3 = getans3();
	compare(q, b1, b2, b3);
}

int init(x)   //亂數產生器
{
	a = (rand() % x) + 1;
	return a;
}

int getans1()  //猜第一次
{
	printf("1~%d輸入第一個要猜的數字: ",x);
	scanf("%d", &b);
	return b;
}

int getans2()  //猜第二次
{
	printf("1~%d輸入第二個要猜的數字: ", x);
	scanf("%d", &c);
	return c;
}

int getans3()  //猜第三次
{
	printf("1~%d輸入第三個要猜的數字: ", x);
	scanf("%d", &d);
	return d;
}

int compare(q, a, b, c)  //執行題目與猜的結果是否相同
{
	if(a>q || b>q || c>q)
		printf("您有輸入超出範圍的值喔\n");
	else if(q==a)
		printf("\n恭喜第一次答對!!!答案就是%d\n", q);
	else if(q==b)
		printf("\n恭喜第二次答對!!!答案就是%d\n", q);
	else if(q==c)
		printf("\n恭喜第三次答對!!!答案就是%d\n", q);
	else
		printf("全部猜錯，答案是%d\n", q);
}


/*{
	if (q == a || q == b || q == c)

		printf("\n恭喜答對!!!答案就是%d\n", q);
	else
		printf("全部猜錯，答案是%d\n", q);
}*/

//最簡單的判斷方法，沒有管第幾次猜對的方法