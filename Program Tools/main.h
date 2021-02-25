#include <cstdio>
#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <windows.h>

void color(int x) { //设置字体颜色
	/*
	0 = 黑色       8  = 灰色
	1 = 蓝色       9  = 淡蓝色
	2 = 绿色       10 = 淡绿色
	3 = 浅绿色     11 = 淡浅绿色
	4 = 红色       12 = 淡红色
	5 = 紫色       13 = 淡紫色
	6 = 黄色       14 = 淡黄色
	7 = 白色       15 = 亮白色
	*/
	if (x >= 0 && x <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void printEndl(int x) { //打印换行 
	if (x <= 1)
		printf("\n");
	else
		for (int i = 1; i <= x; i++)
			printf("\n");
}

void cls(bool debug) { //清屏
	system("cls");
	if (debug) {
		color(4);
		//printf("######################### [WARNING! DEBUG MODE OEPN!] #########################\n");
	}
}

void pause(bool inv) { //暂停 
	system(inv ? "pause > nul" : "pause");
}

void csi() { //清除输入区缓存 
	fflush(stdin);
}

void cso() { //清除输出区缓存 
	fflush(stdout);
}