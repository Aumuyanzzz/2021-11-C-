#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;//;���Ÿ�����䣬����;��ʾ�����
//	//if����ʽ
//	if(a = 0)
//		a = 0;//��
//	 
//	if (a = 1)
//		a = 1;
//	else
//		a = 3;//��
//
//	if (a = 1)
//		a = 1;
//	else if (a = 0)
//		a = 0;
//	else
//		a = 3;//��
//
//	return 0;
////}
//
////����
//int main()
//{
//	int age = 51;
//	if (age >= 18)
//		printf("����\n");
//	if (age < 18)
//		printf("δ����\n");
//	/*else if (age = 18)
//		printf("�ճ���\n");*/
//	else if (age >= 18 && age < 50)//&&��ʾ���� ||��ʾ����
//		printf("׳��\n");
//	else 
//		printf("�ѳ���\n");
//
//	return 0;
//}
/*if
 else if
else
����д��
if
else
{if
else if
else}*/
//if��䣨��������{}��ʾ����飬�������ʽ����ʡ��{}��������ʽ����ʡ��{}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else�������ifƥ�䣻����Ӧ��{}�����
//	else
//		printf("hhh\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d\n", &a);
//	if (1 == a % 2)
//		printf("����\n");
//	else if(0 == a%2)
//		printf("ż��\n");
//	return 0;
//}//��ϰ���ж�һ�����Ƿ�������
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		    	if (1 == a % 2)
//			printf("%d\n", a);
//		a++;
////	}
////	return 0;
////}//��ϰ�����1��100֮�������
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//
//
//	return 0;
// }
//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch(day)
//	{
//		case 1:
//			printf("����һ\n");
//		case 2:
//				printf("���ڶ�\n");
//		case 3:
//					printf("������\n");
//		case 4:
//						printf("������\n");
//		case 5:
//							printf("������\n");
//		case 6:
//								printf("������\n");
//		case 7:
//								printf("������\n");
//	}
//									return 0;
//}//break ����/��ֹѭ����default;  �����󣬼��ȡֵ
 
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;//��ֹѭ���б���ѭ��continue����Ĵ��룬����ѭ����ͷ
//		printf("%d\n", a);
//		a++;
//
//	}
//
//	return 0;
//}
//int main()
//{
//
//	int ch = getchar();//getchar:����һ�����ص��ַ�
//	putchar(ch);//putchar:��ӡһ���ַ�
//	printf("%c\n", ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+Z	����ѭ�� EOF- end of file -> -1

		putchar(ch);
	}

	return 0;
}