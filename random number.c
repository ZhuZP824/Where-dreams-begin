//#include<stdio.h>
//#include<stdlib.h>  //rand函数所需头文件
//#include<time.h>    //time函数所需头文件
//int main()
//{
//    srand(5);//因为rand函数是依靠种子固定生成随机数的
//             //所以只需要通过srand函数调用改变种子的值即可改变随机值
//             //srand的值必须是无符号整形
//             //time时间戳其返回值会随着时间的变化而改变
//             //通过此函数改变srand的种子最合适不过了
//    srand((unsigned int)time(NULL));//因为time的返回类型是一个32位或64位的整形类型
//                                    //所以为符合srand须将其返回值强行转换成无符号整形
// //输出随机数 
//    printf("%d\n", rand());
//    printf("%d\n", rand());
//    printf("%d\n", rand());
//    printf("%d\n", rand());
//}
生成1-100的随机数代码如下
如果要生成a-b的随机数公式:a + rand() % (b - a + 1)
注：%n所产生的数值区间为0——n-1
#include<stdio.h>
#include<stdlib.h>  //rand函数所需头文件
#include<time.h>    //time函数所需头文件
int main()
{
    int i = 0;
    srand((unsigned int)time(NULL));//通过srand函数改变其种子为time
    for (i = 0; i < 100; i++)
    {
        printf("第%d位随机数:", i);
        printf("%d\n", rand() % 100 + 1);
    }
    return 0;
}