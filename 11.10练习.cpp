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
//		printf("%d������", x);
//	else
//		printf("%d��������",x);
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
//		printf("������");
//	else if (prf(year)== 0)
//		printf("��������");
//	return 0;
//}
//int binary_search(int arr[], int m,int a)//(�β�ֻ�ܽ���������׸�Ԫ�ص�ָ��-�ĸ��ֽڴ�С,�����Զ��庯����Ҫ���鳤��ʱ�β�������鳤��)
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
//		printf("�Ҳ���ָ��������");
//	else
//		printf("�ҵ��ˣ��±���%d", m);
//	return 0;
//}

int add(int*);//��������

int main()//�Զ��庯���޸ı�����ָ��ɽ�ʡ�ڴ棺��ַ����
{
	int m = 0;
	int n = 0;
	for (n = 0; n < 5; n++)
	{
		add(&m);
		printf("%d\n", m);
		
	}
	printf("%d", printf("%d"), printf("%d", printf("%d"), 43));
	//������Ƕ��ʹ��/printf�����ķ���ֵ��(int)��ӡ�ַ��ĸ���
	return 0;


}
int add(int* m)//���庯��
{
	(*m)++;
	return *m;

}
