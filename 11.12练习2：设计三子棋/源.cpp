#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };





}
void menu()
{
	printf("**************************\n");
	printf("******��ӭ����������******\n");
	printf("*** 1. play    0. exit ***\n"); 
    printf("**************************\n");
}
int main()
{
	int a = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:	
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����ָ��\n");
			break;
		}


	} while (a);
	return 0;
}