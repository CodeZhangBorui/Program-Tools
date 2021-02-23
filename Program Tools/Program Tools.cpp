﻿// Program Tools.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "main.h"
#include "bf.h"
using namespace std;
bool DEBUG;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void isDEBUG() {
	if (DEBUG) {
		color(4);
		printf("######################### [WARNING! DEBUG MODE OEPN!] #########################\n");
	}
}


int main(int argc, char** argv) {
	clock_t startTime, endTime;
	startTime = clock();//计时开始
	color(2);
	printf("\n\n\n\n\t程序加载中...");
	system("title Program Tools V1.4");
	system("echo off");
	system("c:");
	system("cd C:/Windows/System32");
	int mode, modeEnter;
	//Sleep(1000);
	cls(DEBUG); isDEBUG();

	while (true) {
	//top:;
		color(15);
		printf("=================================Program Tools=================================\n");
		printEndl(2);
		color(3);
		printf("\t----------程序菜单----------\n");
		color(14);
		printf("\t[0] 退出\n");
		printf("\t[1] 关于 Program Tools\n");
		printf("\t[2] ASCII/字符互转\n");
		printf("\t[3] 命令提示符\n");
		printf("\t[4] Brainfuck 图灵测试\n");
		printEndl(2);
		color(15);
		printf("请输入选择功能的序号：");
		scanf_s("%1d", &mode);
		cls(DEBUG); isDEBUG();

		switch (mode) {
		case 1: {
			color(15);
			printf("=================================Program Tools=================================\n");
			printEndl(2);
			color(3);
			printf("\t----------关于此程序----------\n");
			color(14);
			printf("\tProram Tools，让编程更简单\n");
			printEndl(1);
			printf("\t版本: V1.5 (21H1), 2021-02-21 Update\n");
			printf("\t语言: 中文简体 (zh-cn)\n");
			printf("\t制作者: CodeZhangBorui By PowerCode Studio - 电力代码工作室 Code张博睿\n");
			printf("\t制作语言: C++ 14, Visual Studio 2019\n");
			printEndl(1);
			printf("欢迎投稿功能函数、反馈程序 BUG! 邮箱地址: ");
			color(9);
			printf("zhangborui@boxly.cn\n");

			color(14);
			printf("\n------------------------------------\n\n");
			printf("21H1 更新内容：\n");
			printf("\t1. C++ 标准从 C++11 升级到了 C++14\n");
			printf("\t2. 开始使用 Visual Studio 2019 进行开发\n");

			color(15);
			printEndl(2);
			printf("按任意键退出...");
			pause(true);
			break;
		}
		case 2: {
			color(3);
			printf("----------程序菜单----------\n");
			color(14);
			printf("[0] 取消\n");
			printf("[1] ASCII => 字符\n");
			printf("[2] 字符 => ASCII\n");
			printEndl(2);
			color(15);
			printf("请输入选择功能的序号：");
			csi();
			scanf_s("%1d", &modeEnter);
			cls(DEBUG); isDEBUG();
			color(15);
			switch (modeEnter) {
			case 1: {
				color(3);
				printf("----------程序菜单----------\n");
				color(8);
				printf("[0] 取消\n");
				color(14);
				printf("[1] ASCII => 字符\n");
				color(8);
				printf("[2] 字符 => ASCII\n");
				printEndl(2);
				color(15);

				char c;
				printf("请输入要查询的 ASCII：");
				csi();
				scanf_s("%d", &c);
				if (c >= 0 && c <= 177) printf("查询结果：%c\n\n", c);
				else {
					color(4);
					printf("查询错误！请检查是否为标准 ASCII 码 (值为 0 到 177)\n\n");
					color(15);
				}
				pause(false);
				break;
			}
			case 2: {
				color(3);
				printf("----------程序菜单----------\n");
				color(8);
				printf("[0] 取消\n");
				printf("[1] ASCII => 字符\n");
				color(14);
				printf("[2] 字符 => ASCII\n");
				printEndl(2);
				color(15);

				char c;
				printf("请输入要查询的字符：");
				csi();
				scanf_s("%c", &c);
				if (c >= 0 && c <= 177) printf("查询结果：%d\n\n", c);
				else {
					color(4);
					printf("查询错误！请检查是否为标准 ASCII 码 (值为 0 到 177)\n\n");
					color(15);
				}
				pause(false);
				break;
			}
			case 0: {
				break;
			}
			}
			break;
		}
		case 3: {
			cls(DEBUG); isDEBUG();
			color(14);
			printf(">[命令提示符已打开，输入 exit 退出]<\n");
			color(7);
			system("cmd");
			break;
		}
		case 4: {
			brainfuck();
			break;
		}
		case 9: {
			cls(DEBUG); isDEBUG();
			color(4);
			printf("\nWARNING! DEBUG MODE SETTINGS!\n\n");
			printf("DEBUG MODE OEPN! RESTART TOOLS TO RESET.\n");
			DEBUG = true;
			pause(false);
			break;
		}
		case 0: {
			color(7);
			endTime = clock();
			if (DEBUG) {
				cls(DEBUG); isDEBUG();
				printf("-----------------------------\n");
				printf("DEBUG MODE: Process exited after %.3llf seconds with return value 0\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);
				pause(false);
			}
			return 0;
			break;
		}
		}
		cls(DEBUG); isDEBUG();
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件