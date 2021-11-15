#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include"game.c"
void game()
{
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		Sleep(200);
		displayboard(board, ROW, COL);
		if (Iswin(board, ROW, COL) == 'p')
			break;
		else if (Iswin(board, ROW, COL) == 'e')
			break;
		pcmove(board, ROW, COL);
		Sleep(400);
		displayboard(board, ROW, COL);
		if (Iswin(board, ROW, COL) == 'c')
			break;
		else if (Iswin(board, ROW, COL) == 'e')
			break;
	}
	if (Iswin(board, ROW, COL) == 'p')
		printf("玩家赢\n");
	else if (Iswin(board, ROW, COL) == 'c')
		printf("电脑赢\n");
	else if (Iswin(board, ROW, COL) == 'e')
		printf("平局\n");



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