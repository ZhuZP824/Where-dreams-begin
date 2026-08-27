#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//定义 行 列(方便后续修改行列）
#define ROW 9
#define COLUMN 9
#define ROWS ROW+2
#define COLUMNS COLUMN+2
//定义地雷个数
#define MINE_AMOUNT 10
//声明初始化函数
void initialize(char arr[ROWS][COLUMNS], int x, int y,char set);
//声名打印棋盘函数
void prinBoard(char arr[ROWS][COLUMNS], int x, int y);
//声名布置雷函数
void arrange_mine(char arr[ROWS][COLUMNS], int x, int y);
//声名排雷函数
void detect_mine(char arr1[ROWS][COLUMNS], char arr2[ROWS][COLUMNS], int x, int y);
