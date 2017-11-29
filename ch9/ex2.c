#include<stdio.h>
#include<stdlib.h>

/*主要是要明白，此程式的"."用意，為把資料存取到該位置的寫法 */

void ex2()
{
	struct triangle
	{
		int length, height;
		double area;
	};

	struct triangle tri;
	printf("請輸入三角形的長");
	scanf("%d", &tri.length);
	printf("請輸入三角形的寬");
	scanf("%d", &tri.height);
	tri.area = tri.length * tri.height / 2.0;
	printf("三角形的面積為%.2lf \n", tri.area);

}