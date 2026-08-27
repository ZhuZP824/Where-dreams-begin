#include"game.h"
//定义初始化棋盘函数
void initialize(char arr[ROWS][COLUMNS],int x,int y,char set)
{
	int i = 0;
	for ( i = 0 ; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			arr[i][j] = set;//直接定义一个字符参数引入
		}
	}
}
//定义打印棋盘函数(只打印游戏区域，防溢出区域不打印)
void prinBoard(char arr[ROWS][COLUMNS], int x, int y)
{
	int j = 0;
	int i = 0;
	for (int j = 0; j <= y; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= x; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= y; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//定义布置雷函数
void arrange_mine(char arr[ROWS][COLUMNS], int x, int y)
{
	int mine_amount = MINE_AMOUNT;
	while (mine_amount)
	{
		// % n 产生0 -- n - 1的数
		int h = rand() % x + 1;
		int l = rand() % y + 1;
		if (arr[h][l] != '1')
		{
			arr[h][l] = '1';
			mine_amount--;
		}
	}
} 
//定义统计雷函数（该函数仅仅是为了排雷函数的实现）
//可用static修饰为内部函数
// 一写法
// static size_t count_mine(char arr1[ROWS][COLUMNS] , int x, int y)
//{
//	return arr1[x - 1][y - 1] + arr1[x - 1][y] + arr1[x - 1][y + 1] +
//		arr1[x][y - 1] + arr1[x][y + 1] + arr1[x + 1][y - 1] +
//		arr1[x + 1][y] + arr1[x + 1][y + 1] - 8 * '0';
//}
//二写法
static size_t count_mine(char arr1[ROWS][COLUMNS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += (arr1[x+i][y+j]-'0');
		}
	}
	return count;
}
//定义排雷函数
void detect_mine(char arr1[ROWS][COLUMNS], char arr2[ROWS][COLUMNS], int x, int y)
{
	int i = 0;
	int j = 0;
	int win = 0;
	printf("请输入坐标(行/列)\n");
	while (win<x*y- MINE_AMOUNT)
	{
		scanf("%d%d", &i, &j);
		//首先保证坐标的合法性
		if (i >= 1 && i <= x && j >= 1 && j <= y)
		{
			if (arr2[i][j] == '*')//判断坐标是否已经排过了
			{
				//开始排雷
				if (arr1[i][j] == '0')
				{
					//排雷后统计周围雷的个数
					arr2[i][j] =  (char) (count_mine(arr1, i, j)+'0');//将size_t强制转换成字符类型
					prinBoard(arr2, ROW, COLUMN);
					win++;
				}
				else
				{
					printf("您被炸死了\n");
					prinBoard(arr1, ROW, COLUMN);
					printf("\n");
					break;
				}
			}
			else
			{
				printf("坐标重复\n");
			}
		}
		else
		{
			printf("请输入有效范围\n");
		}
	}
	if (win == x * y - MINE_AMOUNT)
	{
		printf("恭喜您，排雷成功\n");
	}
	else
	{
		printf("您被炸死了\n");
	}
	prinBoard(arr1, ROW, COLUMN);
}