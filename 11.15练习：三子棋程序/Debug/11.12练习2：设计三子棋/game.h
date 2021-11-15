#define ROW 3
#define COL 3 
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void pcmove(char board[ROW][COL],int row, int col);
char Iswin(char board[ROW][COL], int row, int col);