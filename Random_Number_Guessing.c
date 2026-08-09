#define _CRT_SECURE_NO_WARNINGS
//如果要生成1--100的随机数公式如下：a + rand() % (b - a + 1)
//注意： % n 所产生的数值区间为(0--n) % 100数值区间为（0--100）
//猜1--100数字的小游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random()
{ //生成随机数1--100的随机数
    int r = rand() % 100 + 1;
    int i = 0;
    int cisu = 0;
    int a = 5;
    while (1)
    {
        if (cisu < 5)
        {
            a--;
            cisu++;
            printf("请输入你要猜的数字：");
            scanf("%d", &i);
            {
                if (i > r)
                    printf("\t\t猜大了,第%d次，剩余%d\n", cisu, a);
                else if (i < r)
                    printf("\t\t猜小了,第%d次，剩余%d次\n", cisu, a);
                else
                {
                    printf("\t\t猜对了！随机数是%d\n,一共猜了%d次", r, cisu);
                    break;
                }
            }
        }
        else
        {
            printf("无次数了，游戏失败！,随机数是%d\n\n\t\t\t输\n", r);
            break;
        }
    }
}
void caidan()
{
    //打印菜单
    printf("\t\t\t---------------1.being-----------\n");
    printf("\t\t\t---------------0.out-------------\n");
    printf("\t\t\t-----------------------------请选择\n");
}
int main()
{
    //srand((unsigned int)time(NULL));
    int namb;
    do
    {
        srand((unsigned int)time(NULL));
        //并不建议把随机数生成器发到循环里面，如果游戏结束过快随机数可能相同
        caidan();
        scanf("%d", &namb);
        switch (namb)
        {
        case 1:
            printf("游戏开始!\n");
            random();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误请重新选择\n");
            break;
        }
    } while (namb);
    return 0;
}