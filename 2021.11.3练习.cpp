#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;

//}
//int main()//exp1?exp2:exp3;һ�����ʽ��exp1Ϊ�� exp2Ϊ�������ʽ�Ľ����exp1Ϊ�٣�exp3Ϊ�������ʽ���
////����������/��Ŀ������
//
//{
//	int a = 10;//���������a����ɼĴ�������
//	int a = -2;
//	int a = 3;
//	/*int b = 20;
//	int c = a > b ? a : b;
//	printf("%d\n", c);*/
//	return 0;
//
//}
//int main()
//{
//	int "float";
//	return 0;
//}
//int main()
//{
//	typedef unsigned int a;
//	a b = -1;
//	printf("%d", b);
//
//	return 0;
//}


//void test()
//{
//
//	static int b = 1;
//	b++;
//	printf("b=%d\n", b);
//
//}
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		test();
//			a++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int a;
//	printf("a = %d", a);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = qwer;
//	printf("a = %d\n", a);
//	return 0;
//}#define qwer 100
//#define z(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = z(a,b);
//	printf("max = %d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int* b = &a;
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 11;
//		printf("%d", *b);
//	return 0;
//}
//int main()
//{
//	double a = 3.14;
//	double* b = &a;
//	*b = 3.15;
//	printf("%lf\n", a);
//	return 0;
//}
struct Book
{
	char name[20];
	short price; 

};
int main()
{
	struct Book b1 = {"C���Գ������",55};
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	strcpy(b1. name, "C++");
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	struct Book* p = &b1;
	/*printf("������%s\n",  (*p).name);
	printf("�۸�%dԪ\n", (*p).price);*/
	printf("%s\n", p->name);
	printf("%d\n", p->price);

	return 0;
}