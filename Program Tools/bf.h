#include <cstdio>
#include <cstdlib>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

void brainfuck() { //Brainfuck 编译器
    //char c;
    int i = 0, j, k, x = 0;
    char s[30000] = { 0 };
    char* p = s + 10000;
    char code[100000];
    int len = 0;
    int stack[100] = { 0 };
    int stack_len = 0;
    color(15);
    cout << "-----代码-----\n\n";
    color(12);
    cin >> code;
    //getline(cin,code)
    csi();
    color(15);
    cout << "\n-----执行-----\n";
    len = strlen(code);
    while (i < len) {
        switch (code[i]) {
        case '+':
            (*p)++;
            break;
        case '-':
            (*p)--;
            break;
        case '>':
            p++;
            break;
        case '<':
            p--;
            break;
        case '.':
            color(14);
            putchar(*p);
            //printf("put:%hdn",*p);
            break;
        case ',':
            color(15);
            cout << "\n输入：";
            color(12);
            *p = getchar();
            break;
        case '[':
            if (*p) {
                stack[stack_len++] = i;
            }
            else {
                for (k = i, j = 0; k < len; k++) {
                    code[k] == '[' && j++;
                    code[k] == ']' && j--;
                    if (j == 0)break;
                }
                if (j == 0)
                    i = k;
                else {
                    color(15);
                    cout << "\n[错误!]";
                    pause(false);
                    return;
                }
            }
            break;
        case ']':
            i = stack[stack_len-- - 1] - 1;
            break;
        default:
            break;
        }
        i++;
        //x++;
        //printf("%d : i=%dn",x,i);
    }
    color(15);
    cout << "\n\n-----完成-----\n\n";
    pause(false);
    printf("\n");
}