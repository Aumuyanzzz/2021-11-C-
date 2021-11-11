#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//
//}//函数的递归
//void print(int t)
//{
//	printf("%d\n", t % 10);
//	if (t >= 10)
//	{
//		print(t/10);
//	}
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", strlen(arr));
//	return 0;
//}
//int strlen(char* arr)
//{
//	int a = 0;
//	while (*arr != '\0')
//	{
//		a++;
//		arr++;
//	}
//	return a;
//
//}
//int main()
//{	 
//	char arr[] = "bit";
//	printf("%d", strlen(arr));
//	return 0;
//}
//int strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + strlen(arr + 1);
//	}
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d",strlen(arr));
//
//	return 0;
//}
//int sum(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return sum(x - 1) * x;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",sum(a));
//
//	return 0;
//}
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;//合理应用递归和循环
//	}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", fib(a));
//	return 0;
//}//斐波那契数列
//int math1(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return 2 * math1(x - 1) + 1;
//
//
//}
//
//int math2(int x)
//{
//	int a = 1;
//		while (x > 1)
//		{
//			a = 2 * a + 1;
//			x--;
//
//
//	}
//		return a;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", math2(a));
//	return 0;
//}//递归解决汉诺塔问题/循环解决汉诺塔问题
int math(int x)
{
	/*if (x <= 2)
		return 1;
	else
		return math(x-1) + math(x - 2);*/
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;

	}
	return c;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", math(a));

	return 0;
}
