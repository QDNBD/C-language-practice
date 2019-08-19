#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row,int col);
void Computermove(char board[ROW][COL], int row, int col);
//"*"--玩家赢
//"#"--电脑赢
//"P"--平局
//"C"--继续
char IsWin(char board[ROW][COL], int row, int col);