#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;//;符号隔开语句，单个;表示空语句
//	//if语句格式
//	if(a = 0)
//		a = 0;//①
//	 
//	if (a = 1)
//		a = 1;
//	else
//		a = 3;//②
//
//	if (a = 1)
//		a = 1;
//	else if (a = 0)
//		a = 0;
//	else
//		a = 3;//③
//
//	return 0;
////}
//
////举例
//int main()
//{
//	int age = 51;
//	if (age >= 18)
//		printf("成年\n");
//	if (age < 18)
//		printf("未成年\n");
//	/*else if (age = 18)
//		printf("刚成年\n");*/
//	else if (age >= 18 && age < 50)//&&表示交集 ||表示并集
//		printf("壮年\n");
//	else 
//		printf("已成年\n");
//
//	return 0;
//}
/*if
 else if
else
可以写成
if
else
{if
else if
else}*/
//if语句（函数）后{}表示代码块，单个表达式可以省略{}，多个表达式不可省略{}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else和最近的if匹配；合理应用{}代码块
//	else
//		printf("hhh\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d\n", &a);
//	if (1 == a % 2)
//		printf("奇数\n");
//	else if(0 == a%2)
//		printf("偶数\n");
//	return 0;
//}//练习：判断一个数是否是奇数
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
////}//练习：输出1到100之间的奇数
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
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
//			printf("星期一\n");
//		case 2:
//				printf("星期二\n");
//		case 3:
//					printf("星期三\n");
//		case 4:
//						printf("星期四\n");
//		case 5:
//							printf("星期五\n");
//		case 6:
//								printf("星期六\n");
//		case 7:
//								printf("星期天\n");
//	}
//									return 0;
//}//break 跳出/终止循环；default;  检测错误，检测取值
 
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;//中止循环中本次循环continue后面的代码，跳到循环开头
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
//	int ch = getchar();//getchar:接收一个返回的字符
//	putchar(ch);//putchar:打印一个字符
//	printf("%c\n", ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+Z	结束循环 EOF- end of file -> -1

		putchar(ch);
	}

	return 0;
}