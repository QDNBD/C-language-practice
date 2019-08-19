#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("************************\n");
	printf("****     1.play     ****\n");
	printf("****     2.exit     ****\n");
	printf("************************\n");
}


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);//打棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
     	ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'P')
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	while (input != 2)
	{
		menu();
		printf("请输入对应的数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 2:printf("退出游戏\n");
			break;
		default:printf("输入错误，请重新输入\n");
			break;
		}
	}
	
	return 0;
}
