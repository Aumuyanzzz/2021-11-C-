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
		printf("û��");
	return 0;
}

void pc()
{
	
	char c[10];
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬���ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ�\n������:>");
	scanf("%s", &c);
	if (strcmp(c, "������") == 0)
		system("shutdown -a");
	else
		goto again;


}