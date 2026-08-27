#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void game()
{
	char mine[ROWS][COLUMNS] = { 0 };//初始化为字符零
	char show[ROWS][COLUMNS] = { 0 };//初始化为字符 *
	//引入初始化函数
	initialize(mine, ROWS, COLUMNS, '0');
	initialize(show, ROWS, COLUMNS, '*');
	//打印棋盘
	//prinBoard(mine, ROW, COLUMN);
	prinBoard(show, ROW, COLUMN);
	//布置雷
	arrange_mine(mine, ROW, COLUMN);
	prinBoard(mine, ROW, COLUMN);//检测
	//排雷
	detect_mine(mine, show, ROW, COLUMN);
}
	void memu()
{
	printf("------------------------------------\n");
	printf("----------------1.play--------------\n");
	printf("----------------0.exit--------------\n");
	printf("------------------------------------\n");
	printf("请选择：");
}
int main()
{
	//调用时间戳种子
	srand((unsigned int)time(NULL));
	int namb = 0;
	do
	{
     //打印菜单
		memu();
		//请选择
		scanf("%d", &namb); 
		switch (namb)
		{
		case 1:
			//玩游戏
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误请重新选择\n");
		}
	} while(namb);
	return 0;
}