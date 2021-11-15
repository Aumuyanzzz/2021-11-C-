#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
void initboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';


		}


	}


}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	
    for (i = 0; i < row+1; i++)
	{for (j = 0; j < col; j++)
		{



			printf("|---");
		}
	if(i<row)
		printf("|\n");
		
		for (j = 0; j < col; j++)
		{


			if(i<row)
			printf("| %c ",board[i][j]);
		}
		printf("|\n");
		
	}



}
void playermove(char board[ROW][COL], int row, int col)
{
	Sleep(300);
	int x, y;
	printf("玩家走:>\n");
	
	while (1)
	{
		printf("请输入要下的坐标\n");
		scanf("%d%d", &x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("该位置已被占用\n");
				Sleep(200);
			}
		}
		else
		{
			
			printf("坐标错误，请重新输入\n");
			Sleep(200);
		}
	}

}
void pcmove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑走:>\n");
	
	while(1)
	{
		srand((unsigned int) time(NULL));
	x = rand() % row;
	y = rand() % col;
		if (board[x][y] == ' ')
	{
		board[x][y] = 'x'; 
		break;
	}
	else
			continue;
}


}
char Iswin(char board[ROW][COL], int row, int col)
{
	int a, b;
	for (a = 0; a < row; a++)
	{
		if (board[a][0] == board[a][1] && board[a][1] == board[a][2] && board[a][0] == 'o')
			return 'p';
		else if (board[a][0] == board[a][1] && board[a][1] == board[a][2] && board[a][0] == 'x')
			return 'c';
	}

	for (b = 0; b < col; b++)
	{
		if (board[0][b] == board[1][b] && board[0][b] == board[2][b] && board[0][b] == 'o')
			return 'p';
		else if (board[0][b] == board[1][b] && board[0][b] == board[2][b] && board[0][b] == 'x')
			return 'c';
	}
	if (board[0][2] == 'o'&& board[0][2] == board[1][1] && board[0][2] == board[2][0] )
		return 'p';
	else if (board[0][2] == 'x'&& board[0][2] == board[1][1] && board[0][2] == board[2][0])
		return 'c';
	else if ( board[2][2] == 'o' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
		return 'p';
	else if (board[2][2] == 'x'&& board[0][0] == board[1][1] && board[0][0] == board[2][2])
		return 'c';
		for (int c = 0; c < row; c++)
		{
			for (int d = 0; d < col; d++)
			{
				if (board[c][d] == ' ')

					return 't';

			}


		}
		return 'e';
	}

