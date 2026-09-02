void print2(int x)//(下半部分)
{
    int i = 0;//行
    for (i = x - 1; i >= 0; i--)
    {
        int empty = x - i - 1;//空格数量
        int star = i * 2 + 1;//星数量
        while (empty != 0)//先打印空格
        {
            printf(" ");
            empty--;
        }
        while (star != 0)//在打印星
        {
            printf("*");
            star--;
        }
        printf("\n");
    }
}
void print(int line)//接收行号(上半部分)
{
    //分两部分处理，先处理上半部分
    for (int i = 0; i < line; i++)
    {
        int empty = line - i - 1;//空格数量
        int star = i * 2 + 1;//星号数量
        while (empty != 0)
        {
            printf(" ");
            empty--;
        }
        while (star != 0)
        {
            printf("*");
            star--;
        }
        printf("\n");
    }
    //下半部分(共line - 1 行)
    print2(line);
}
#include<stdio.h>
int main()
{
    int count = 0;
    printf("请输入菱形的行数/2\n");
    printf("如打印10行则输入5\n");
    scanf("%d", &count);
    print(count);
}