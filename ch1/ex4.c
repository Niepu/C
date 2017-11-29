#include<stdio.h>
#include<stdlib.h>

//控制輸出欄位的寬度

void ex4(void)
{
	int num1 = 32, num2 = 1024;
	float num3 = 12.3478f;
	printf("num1=%6d km\n", num1);     //顯示●●●●32 km  (●是空格)
	printf("num2=%-6d km\n", num2);    //顯示1024●● km  (●是空格)
	printf("num3=%6.2f mile\n", num3); //顯示●12.35 km  (●是空格)
}