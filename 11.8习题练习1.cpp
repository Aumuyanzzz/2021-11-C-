#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//		d = a,
//		a = b,
//		b = d;
//	if (a < c)
//		d = a,
//		a = c,
//		c = d;
//	if (b < c)
//		d = b,
//		b = c,
//		c = d;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	 scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		
//		c = a % b;
//		a = b;
//		b = c;
//
//	}
//	printf("%d",c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 4 == 0 && a % 100 || a % 400 == 0)
//			printf("%d\n", a);
//		//else if ((a ) % 400 == 0)
//			//printf("%d\n", a);
//
//	}
////
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	int c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//				break;
//			
//
//		}
//		if (b == a)
//			c++,
//			printf("%d %d\n", a,c);
//
//	}
//	return 0;
//}
#include<math.h>
//int main()
//{
//	int a = 0;
//	int c = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		
//		for (b = 2; b <= sqrt(a); b++)
//		{
//
//			if (a % b == 0)
//			{
//				break;
//			}
//
//		}
//		if(b>sqrt(a))
//		c++,
//			printf("%d %d\n", a, c);
//	}
//	return 0; 
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	int n = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		n = a % 10;
//		m = a / 10;
//		if (m ==9)
//			b++;
//		if (n == 9)
//			b++;
//			
//
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	double a = 0.0;
//	int b = 1;
//	/*double c = 0.0;
//	;double d = 0.0;*/
//	int m = 1;
//		for (b = 1;b<=100;b++)
//	{
//		
//		a += m * 1.0 / b;
//		//可加入int m = -m, a += m* 1.0 / b 
//		m = -m;
//	}
//	/*for (b = 2; b <= 100; b = b + 2)
//	{
//		c -= 1.0 / b;
//
//	}
//	d = a + c;*/
//
//	printf("%lf\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 3948,32402,1234,324030304,4544 };
//	int a = arr[0];
//	int b = 0;
//	int c = sizeof(arr) / sizeof(arr[0]);
//	for (b = 0;b<c;b++)
//	{
//		if( a <= arr[b])
//		a = arr[b];
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	for(a = 1;a<=9;a++)
//	{
//		printf("\n");
//		for (b = 1; b <= a; b++)
//		{
//			
//			c = a * b;
//			printf("%d * %d = %-2d  ", a, b, c);
//		}//%2d向右对齐 %-2d向左对齐



//
//
//	}
//
////	return 0;
////}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = (sizeof(arr) / sizeof(arr[0]) - 1);
//	int left = 0;
//	int right = a;
//		int mid = a / 2;
//	while (right > left)
//	{
//	
//		if (m > arr[mid])
//			{
//			left = mid + 1;
//			mid = (right + left) / 2;
//			continue;
//		}
//		else if (m < arr[mid])
//		{
//			right = mid - 1;
//			mid = (right + left) / 2;
//			continue;
//		}
//		else if (m == arr[mid])
//		{
//			
//			break;
//		}
//}
//	printf("%d", mid);
//	return 0;
//}