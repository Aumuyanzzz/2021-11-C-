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
	printf("******欢迎游玩三子棋******\n");
	printf("*** 1. play    0. exit ***\n"); 
    printf("**************************\n");
}
int main()
{
	int a = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:	
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("错误指令\n");
			break;
		}


	} while (a);
	return 0;
}