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
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n������:>");
	scanf("%s", &a);
	if (strcmp(a, "������") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}