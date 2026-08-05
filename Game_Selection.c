#define _CRT_SECURE_NO_WARNINGS
//模拟游戏中对boos造成伤害时对应底层代码
#include<stdio.h>
int main()
{
    int boss = 1000;
    int harm = 150;
    int choice = 0;
    printf("您遇到了boss,是否挑战boos:\n");
    do
    {

        printf("\t1挑战/0撤退\t");
        scanf("%d", &choice);
        //printf("成功发起决斗！\n");
    } while (choice != 0 && choice != 1);
    if (choice == 1)
    {
        printf("成功发起决斗！\n");
        do
        {
            int a = 0;
            printf("您的下一步是?\n\t\t1攻击0撤退\t");
            scanf("%d", &a);
            if (a == 1)
            {
                int blood = (boss < harm ? boss : harm);//防止血量为负数
                //当血量小于伤害时将血量值赋给此次伤害
                printf("对boss造成了%d点伤害\n\n", blood);
                boss -= blood;
                printf("boss血量剩余%d\n\n", boss);
                if (boss == 0)
                {
                    printf("\t\t\t\t\t您击败了boss!\n");
                }
            }
            else if (a == 0)
            {
                printf("\t\t\t\t您撤退了，boss剩余血量为:%d\n", boss);
                break;
            }
            else
                printf("请输入1/0\n\n\n");
        } while (boss > 0);//血量大于0可攻击boss
    }
    else if (choice == 0)
    {
        printf("\t\t\t\t\t撤退成功\n");
    }
    else
        printf("请输入0/1");
    return 0;
}