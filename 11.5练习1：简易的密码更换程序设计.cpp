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
		printf("������������:>");
		scanf("%s", password);
		
		while((ch = getchar()) != '\n');
		{

		}
		printf("�Ƿ�ȷ������Ϊ������[Y/N]:>\n");
		ret = getchar();
		if (ret == 'Y') 
		{
			int t = 0;
			printf("�޸ĳɹ��������룺\n"),
				printf("%s", password);
			while (t = getchar()!=  '\n');
			{
             }
			break;
		}
		else if (ret == 'N')
		{
			printf("����ȷ��\n");
			while (getchar() != '\n');
			{

			}

			continue;
		}
		
		else
		{
			printf("��������\n");
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
//	printf("����������:>");
//	scanf("%s", password);
//	getchar();
//	printf("��ȷ��[Y/N]:>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//
//	}
//	else
//	{
//
//		printf("����ȷ��\n");
//	}
//	return 0;
//
//}