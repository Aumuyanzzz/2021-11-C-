#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
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
			printf("大了\n");
		else if (m < c)
			printf("小了\n");
		else if (m = c)
			printf("恭喜你，猜中了！\n");
	}
		

}



int main() 
{
	srand((unsigned int) time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
		{
			printf("欢迎游玩猜数字游戏\n请输入:>");
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("错误指令\n");
			break;
		}
		}



	}
		while (a);


		return 0;
}