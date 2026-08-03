#include<stdio.h>
int main()
{
    //int a = 0;
    //int b = 0;
    //scanf_s("%d%d", &a, &b);
    //int max = (a > b ? a: b);//三目操作符a>b时返回a否则返回b
    // 格式为 n > m ? n : m 
    //printf("%d", max);
    int i = 0;
    scanf_s("%d", &i);
    //发送消息后心情变化值ovo
    printf("心情：%s", i <= 1 ? "很开心" : i <= 10 ? "可能还没看到这条消息" : i <= 60 ? "打把游戏等等吧" : "不等了写代码去了");
    return 0;
}