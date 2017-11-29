#include<stdio.h>
#include<stdlib.h>

int ex1()

{
	int x = 100;                                 //變數的數值
	int *p1 = &x;                                //用p1的指標變數，去抓(變數)x的資料位置
	int **p2 = &p1;                              //用p2的雙重指標變數，去抓(指標)p1的資料位置
	printf("\n&x變數的位址： %p,x的資料數值： %d\n",&x,x); //結果顯示出變數x的資料位置和變數x的數值
	printf("&p1資料變數本身的位址： %p\,p1變數所得到的位址 %p\n", &p1, p1); //結果顯示出指標變數p1本身的資料位置和指標變數p1的所得到變數x的資料位置
	printf("&p2資料變數本身的位址： %p\,p2變數所得到的位址 %p\n", &p2, p2); //結果顯示出指標變數p2本身的資料位置和指標變數p2的所得到資料變數p1的資料位置
	printf("*p1所顯示的數值： %d\,**p2所顯示的數值： %d\n", *p1, **p2); //最後印出p1表標變數和p2指標變數的(數值)
	printf("p1佔%d bytes\,p2佔%d bytes\n",sizeof(p1),sizeof(p2)); //顯示所佔記憶體空間
}