#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
void menu() 
{
	printf("********************************\n");
	printf("****    1.play    0.exit    ****\n");
	printf("********************************\n");
}
void game()
{
	int m = 1;
	
	
	
	int c = rand()%100+1;
	while (m != c)
	{
		scanf("%d", &m);
		if (m > c)
			printf("����\n");
		else if (m < c)
			printf("С��\n");
		else if (m = c)
			printf("��ϲ�㣬�����ˣ�\n");
	}
		

}



int main() 
{
	srand((unsigned int) time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
		{
			printf("��ӭ�����������Ϸ\n������:>");
			game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("����ָ��\n");
			break;
		}
		}



	}
		while (a);


		return 0;
}