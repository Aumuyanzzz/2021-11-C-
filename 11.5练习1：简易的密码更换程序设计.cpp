#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//
//	{
//		putchar(ch);
//	}
//	return 0;
//} 
int main()
{
	int a = 0;
	int ret = 0;
	char password[30] = { 0 };
	while (a < 3)
	{
		int ch = 0;
		printf("请输入新密码:>");
		scanf("%s", password);
		
		while((ch = getchar()) != '\n');
		{

		}
		printf("是否确认设置为新密码[Y/N]:>\n");
		ret = getchar();
		if (ret == 'Y') 
		{
			int t = 0;
			printf("修改成功，新密码：\n"),
				printf("%s", password);
			while (t = getchar()!=  '\n');
			{
             }
			break;
		}
		else if (ret == 'N')
		{
			printf("放弃确认\n");
			while (getchar() != '\n');
			{

			}

			continue;
		}
		
		else
		{
			printf("错误输入\n");
			while (getchar() != '\n');
			{

			}
			continue;
		}
	}
//		
//

	return 0;
}
//int main()
//{
//	int ret = 0;
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();
//	printf("请确认[Y/N]:>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//
//		printf("放弃确认\n");
//	}
//	return 0;
//
//}