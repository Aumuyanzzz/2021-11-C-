#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//
//		putchar(a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	do
//	{
//		printf("%d", a);
//		a++;
//		printf("%d\n", a);
//			
//	}
//	while (a<=10);
//		
//		return 0;
//}
//int main()
////��׳�
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	printf("������n��ֵ��\nn=");
//	scanf("%d", &a);
//	for (b = 1,c = 1; b <=  a; b++)
//	{
//		c = c * b;
//		d = d + c;
//		if (b == a)//��***һ���Ⱥ��Ǹ�ֵ�������Ⱥ��ǱȽ�***
//
//		{
//			printf("%d\n", c);
//			printf("%d", d);
//		}
//	}
//
//
//	return 0;
//}
//int main()
////��׳˵ĺ�
//{
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (b = 1, c = 1; b <= 10; b++)
//	{
//		c = c * b;
//		d = d + c; 
//	}
//	printf("%d\n%d", c, d);
//
//	return 0;
//}
//int main()
////���ֲ���
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���±�
//		
//		int t = 0;
//	t = sizeof(arr) / sizeof(arr[0]);
//	int right = t - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		int k = 7;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("%d", arr[mid]);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!!!";
//	char arr2[] = "**********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	printf("%s\n", arr2);
//	}
//	
//	return 0;
// }
int main()
{

	char b[20] = {0};
	 
	int c = 1;
	printf("���������룺");
	while (c<=3)
	{
		scanf("%s",b);
		if (strcmp(b,"123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
			c++;
	}
	printf("��������˳�����");
	return 0;
}