#include <stdio.h>
#include <stdlib.h>
void ex1()
{
	int i, j, sale[2][4], sum = 0;     /*設定2個變數，1個陣列函數，
									   總和0的變數*/
	for (i = 0; i<2; i++)              /*用for迴圈，來輸入二維陣列的
									   第一列*/
		for (j = 0; j<4; j++)          /*用for迴圈，來輸入二維陣列的
									   第二列*/
		{
			printf("業務員%d 第%d季  業績:", i + 1, j + 1);

			/*設定問題期數，不加1則會顯示零，不符合人的思維，故加1*/

			scanf("%d", &sale[i][j]);  /* 寫入銷售量 */
		}
	printf("***Output***");            /*輸出總結標語*/
	for (i = 0; i<2; i++)              /*用for輸出銷售量並計算總銷售量*/
	{								   /*輸出行數，業務員1和業務員2 */
		printf("\n業務員%d 每季的業績:", i + 1);
		for (j = 0; j<4; j++)          /*輸出列數，每季的業績顯示*/
		{
			printf("%d ", sale[i][j]); /*用陣列表達出結果值*/
			sum += sale[i][j];
		}
	}
	printf("\n2015 results for the total sales volume of %d cars \n", sum);
}