#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
/*int max(int a, int b)
{
	if (a < b)
		a = b;
	return a;


//}*//*int exc(int x, int y)*/
//{
//	int c = 0;
//	c = x;
//	x = y;
//	y = c;
//	return x, y;
//
//}
//
//int main()
//{/*
//	int a = 0;
//	char arr1[] = "bit";
//	char arr2[] = "#############";
//	strcpy(arr2, arr1);
//	a = strlen(arr2);
//	printf("%s\n", arr2);
//	printf("%d\n", a);
//	return 0;*/
//	/*char arr[] = "hello world";
//		memset(arr, '*',6);
//		printf("%s", arr);*/
//	/*int a = 100;
//	int b = 200;
//	printf("%d\n", max(a, b));
//	printf("%d", a);*/
//
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	exc(a, b);
//	printf("%d %d",a, b);
//
//	return 0;
//
//}
//void exc(int* x, int* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//
//
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int* m = &a;
//	int* n = &b;*/
//	exc(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//int  exc(int x)
//{
//	int a = 0;
//	for (a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//			break;
//	}
//	if (a == x)
//		printf("%d是素数", x);
//	else
//		printf("%d不是素数",x);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	exc(a);
//
//		return 0;
//}
//int prf(int year)
//{
//	
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	prf(year); 
// 
//	if (prf(year))
//		printf("是闰年");
//	else if (prf(year)== 0)
//		printf("不是闰年");
//	return 0;
//}
//int binary_search(int arr[], int m,int a)//(形参只能接收数组的首个元素的指针-四个字节大小,所以自定义函数需要数组长度时形参添加数组长度)
//{
//	int left = 0;
//	int right = 0;
//	
//	right = a - 1;
//	
//	
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		
//		if (arr[mid] < m)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > m)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] == m)
//			return mid;
//	}
//	return -1;
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int input = 0;
//	scanf("%d", &input);
//	int m = binary_search(arr,input,a);
//	if (m == -1)
//		printf("找不到指定的数字");
//	else
//		printf("找到了，下标是%d", m);
//	return 0;
//}

int add(int*);//声明函数

int main()//自定义函数修改变量用指针可节省内存：传址函数
{
	int m = 0;
	int n = 0;
	for (n = 0; n < 5; n++)
	{
		add(&m);
		printf("%d\n", m);
		
	}
	printf("%d", printf("%d"), printf("%d", printf("%d"), 43));
	//函数的嵌套使用/printf函数的返回值是(int)打印字符的个数
	return 0;


}
int add(int* m)//定义函数
{
	(*m)++;
	return *m;

}
