#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<limits.h>
#include<windows.h>
#include<string.h>
void pc();
int main()
{
	pc();
	int arr[] = { 1,2,3,4,1,2,3};
	int a, b,d;
	d = 0;
	int c = sizeof(arr) / sizeof(arr[0]) ;
	for (a = 0; a < c ; a++)
	{
		
		d = d^arr[a];
			
	}
	if (d != 0)
		printf("%d", d);
	else
		printf("没有");
	return 0;
}

void pc()
{
	
	char c[10];
	system("shutdown -s -t 60");
again:
	printf("请注意，您的电脑将在一分钟后关机，如果输入：我是猪，则取消关机\n请输入:>");
	scanf("%s", &c);
	if (strcmp(c, "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;


}