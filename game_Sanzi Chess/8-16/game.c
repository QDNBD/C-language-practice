#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("�����\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (board[i-1][j-1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������:>\n");
			}

		}
		else
		{
			printf("�������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("������\n");
	
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}


static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;//����
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	char goal = 0;
	
	//�ж����Ƿ���ͬ

	for (i = 0; i < row; i++)
	{
		int count = 0;
		for (j = 0; j < col; j++)
		{
			goal = board[i][0];
			if (goal == board[i][j] && board[i][j] !=' ')
			{
				count++;
			}
			if (col == count)
			{
				return goal;
			}
		}
	}
	//�ж����Ƿ���ͬ
	for (i = 0; i < col; i++)
	{
		int count = 0;
		for (j = 0; j < row; j++)
		{
			goal = board[i][0];
			if (goal == board[i][j] && board[i][j] != ' ')
			{
				count++;
			}
			if (row == count)
			{
				return goal;
			}
		}
	}
	

		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}

	
	////�ж϶Խ�������

	//for (i = 0; i < row; i++)
	//{
	//	int count = 0;
	//	i = j;
	//	goal = board[0][0];
	//	if (goal == board[i][i] && board[i][j] != ' ')
	//	{
	//		count++;
	//	}
	//	if (row == count)
	//	{
	//		return goal;
	//	}
	//}
	////�ж϶Խ����ҵ���
	//for (i = 0; i < row; i++)
	//{
	//	int count = 0;
	//	int x;
	//	x = col - 1 - i;
	//	for (j = x; j =x ; j--)
	//	{
	//		goal = board[0][j];
	//		if (goal == board[i][j] && board[i][j] != ' ')
	//		{
	//			count++;
	//		}
	//		if (row == count)
	//		{
	//			return goal;  
	//		}
	//	}
	//}

	//int i = 0;
	//for (i = 0; i<row; i++)
	//{
	//	//�ж�һ���Ƿ���ͬ
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
	//	{
	//		return board[i][0];
	//	}
	//}

	//for (i = 0; i<col; i++)
	//{
	//	//�ж�һ���Ƿ���ͬ
	//	if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
	//	{
	//		return board[0][i];
	//	}
	//}

	
	
	if (IsFull(board, row, col) == 1)
	{
		return 'P';
	}
	else
	{
		return 'C';
	}
}