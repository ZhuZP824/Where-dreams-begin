#include<stdio.h>
int main()
{
	int namb = 0;//素数数量
	int j = 1;//假设j=1时为素数
	int i = 0;
	for (i = 101; i <= 200; i += 2)//素数不会是偶数直接找奇数部分就可以
	{
		int j = 2;
		//判断是否为素数
		//不用找到i-1项找最小因子根号i即可
		for (j = 3; j * j <= i; j++)
		{
			if (i % j == 0)//不是素数
			{
				j = 0;
				break;//只要有一个被整除了就直接关闭循环
			}
		}
		if (j)
		{
			namb++;//记录素数出现的次数
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("一共有%d个素数\n", namb);
	return 0;
}