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
		printf("���Ӯ\n");
	else if (Iswin(board, ROW, COL) == 'c')
		printf("����Ӯ\n");
	else if (Iswin(board, ROW, COL) == 'e')
		printf("ƽ��\n");



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