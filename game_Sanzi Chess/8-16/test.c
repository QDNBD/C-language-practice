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
	DisplayBoard(board, ROW, COL);//������
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
     	ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'P')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	while (input != 2)
	{
		menu();
		printf("�������Ӧ������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 2:printf("�˳���Ϸ\n");
			break;
		default:printf("�����������������\n");
			break;
		}
	}
	
	return 0;
}
