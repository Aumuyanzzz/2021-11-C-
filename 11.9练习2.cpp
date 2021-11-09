#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，则取消关机\n请输入:>");
	scanf("%s", &a);
	if (strcmp(a, "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}