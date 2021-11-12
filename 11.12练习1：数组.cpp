#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void ret(int arr[],int sz)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//  		for (j = i + 1; j <= sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int a = arr[j];
//				arr[j] = arr[i];
//				arr[i] = a;
//			}
//
//
//		}
//
//
//	}
//
//
//}
//int main()
//
//{
//	int a = 0;
//	int arr[] = { 6,25,47,1,35,17,8,100,57};
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret(arr, sz);
//	for (a = 0; a <= sz; a++)
//	{
//		printf("%d\n", arr[a]);
//
//
//	}
//	return 0;
//}//ц╟ещееап
void aa(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
				flag = 0;

			}


		}

		if (flag == 1)
			break;
	}



}
int main()

{
	int a = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	aa(arr, sz);
	for (a = 0; a <= sz; a++)
	{
		printf("%d\n", arr[a]);


	}
	return 0;
}//ц╟ещееап