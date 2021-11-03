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
//int main()//exp1?exp2:exp3;一个表达式；exp1为真 exp2为整个表达式的结果；exp1为假，exp3为整个表达式结果
////条件操作符/三目操作符
//
//{
//	int a = 10;//建议把整形a定义成寄存器变量
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
	struct Book b1 = {"C语言程序设计",55};
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	strcpy(b1. name, "C++");
	printf("修改后的价格：%d元\n", b1.price);
	struct Book* p = &b1;
	/*printf("书名：%s\n",  (*p).name);
	printf("价格：%d元\n", (*p).price);*/
	printf("%s\n", p->name);
	printf("%d\n", p->price);

	return 0;
}