#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//	_Bool flag = false; /* true鍦╛Bool/bool/甯冨皵绫诲瀷涓〃绀?/鐪?
//	                       false鍦╛Bool/bool/甯冨皵绫诲瀷涓〃绀?/鍋?*/
//	if (flag)
//	{
//		printf("aaa\n");
//	}
//	/* %zu鏄笓闂ㄧ敤鏉ユ墦鍗皊izeof璁＄畻缁撴灉鐨勭被鍨?*/
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long double));
//	return 0;
//}
//#include<stdio.h>
//int main()	
//{
//	int n;
//	//printf("%c", 'a');
//	printf("zxcvbnm\r");
//	printf("mmm");
//	//printf("\a");
//	for (n = 32; n <= 127; n++)
//	{
//		//printf("%c ", n);
//	}
//}
//#include<stdio.h>
//int main()
//	{
//	printf("%.1f",(1.0/5)*100);
//	return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	float c=(a + b) / 2.0;
//	printf("%.1f\n", c);
//}
//#include <stdio.h>
//int main()
//{
//	//int a;
//	//float b;
//	//int z= scanf_s("%d%f", &a, &b);
//	///* z鐨勫�兼槸scnaf杩斿洖鐨勬垚鍔熻鍙栫殑鍙橀噺鏁伴噺
//	//   scanf%c涓笉浼氳烦杩囩┖鐧藉瓧绗﹀鏋滄兂瑕佽烦杩囩┖鐧藉瓧绗﹀湪%c
//	//   鍓嶉潰鍔犱竴涓┖鏍煎嵆鍙?/
//	//printf("     %d\n%.2f\n", a, b);
//	//printf("%d", z);
//	char arr[20];
//	scanf_s("%s", arr);
//	printf("%s", arr);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r = (3 > 8);
//	/*C 璇█涓〃杈惧紡濡傛灉涓虹湡鍒欒繑鍥?缁村亣鍒欒繑鍥? */
//	printf("%d", r);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入年龄\n");
//	scanf_s("%d", &a);
//	if (a < 18)
//		printf("未成年\n");
//	else
//		printf("成年人\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float m = 10000;
//	int a = 0;
//	float n = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		n = m * 0.03;
//		m += n;
//		printf("第%d年：%.2f\n", a, m);
//	}
//	return 0;
//}
/*    输入一个数计算该数字有几位  */
//#include<stdio.h>
//int main()
//{
//	int namb = 0;
//	int a = 0;/*初始化*/
//	scanf_s("%d", &namb);/*输入的实验数字*/
//	do
//	{
//		a++;/*因为一个数最少有一位先加一*/
//		namb /= 10;
//	} while (namb);/*实验数字为零是表达式为假退出循环*/
//	printf("%d", a);
////}
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int namb;
//	do
//	{
//		scanf_s("%d", &namb);
//		if (namb < 0)
//			printf("请输入正数");
//	} while (namb < 0);
//	printf("输入的正数%d\n", namb);
//	do
//	{
//		a++;/*因为一个数最少有一位先加一*/
//		namb /= 10;
//	} while (namb);/*实验数字为零是表达式为假退出循环*/
//	printf("该数字共有；%d位", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}
/* 素数又被称为质数是只能被1和它本身整除的数字 */
    //找出100-200的素数并计算一共有多少个
//#include<stdio.h>
//int main()
//{
//	int namb = 0;//素数数量
//	int j = 1;//假设j=1时为素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		//判断是否为素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//不是素数
//			{
//				j = 0;
//				break;//只要有一个被整除了就直接关闭循环
//			}
//		}
//		if (j)
//		{
//			namb++;//记录素数出现的次数
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("一共有%d个素数\n", namb);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int namb = 0;//素数数量
//	int j = 1;//假设j=1时为素数
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//素数不会是偶数直接找奇数部分就可以
//	{
//		int j = 2;
//		//判断是否为素数
//		//不用找到i-1项找最小因子根号i即可
//		for (j = 3; j*j <= i; j++)
//		{
//			if (i % j == 0)//不是素数
//			{
//				j = 0;
//				break;//只要有一个被整除了就直接关闭循环
//			}
//		}
//		if (j)
//		{
//			namb++;//记录素数出现的次数
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("一共有%d个素数\n", namb);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    goto next;
//    printf("aaaa\n");//跳过了此行输出代码
//    next:
//    printf("xcv\n");
//    printf("xcv\n");
//}
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
///*生成1 - 100的随机数代码如下
//如果要生成a-b的随机数公式:a + rand() % (b - a + 1)
//注：%n所产生的数值区间为0——n-18*/
//#include<stdio.h>
//#include<stdlib.h>  //rand函数所需头文件
//#include<time.h>    //time函数所需头文件
//int main()
//{
//    int i = 0;
//    srand((unsigned int)time(NULL));//通过srand函数改变其种子为time
//    for (i = 0; i < 100; i++)
//    {
//        printf("第%d位随机数:", i);
//        printf("%d\n", rand()%100+1);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//写一个代码打印1-100之间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 3; i < 100;i++ )
//    {
//        if (i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//}
/*写代码将三个整数数按从大到小输出。

例如：

输入：2 3 1

输出：3 2 18*/
//#include<stdio.h>
//int main()
//{
//    int a, b, c;//假设a为最大值
//    int namb = 0;
//    printf("请输入3个数字:\n");
//    scanf_s("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        namb = a;
//        a = b;
//        b = namb;
//    }
//    if (a < c)
//    {
//        namb = a;
//        a = c;
//        c = namb;
//    }
//    if (b < c)
//    {
//        namb = b;
//        b = c;
//        c = namb;
//    }
//    printf("%d %d %d ", a, b, c);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //int a = 0;
//    //int b = 0;
//    //scanf_s("%d%d", &a, &b);
//    //int max = (a > b ? a: b);//三目操作符a>b时返回a否则返回b
//    // 格式为 n > m ? n : m 
//    //printf("%d", max);
//    int i = 0;
//    scanf_s("%d", &i);
//    //发送消息后心情变化值ovo
//    printf("心情：%s",i<=1?"很开心":i<=10?"可能还没看到这条消息":i<=60?"打把游戏等等吧":"不等了写代码去了");
//    return 0;
//}
//C语言中 ！表示取反预算符
//判断是否是闰年
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    scanf_s("%d", &year);
//    if ((year % 4 == 0 && year % 100 != 0)||(year%400==0))
//    {
//        printf("闰年\n");
//    }
//  /*  else if (year % 400 == 0)
//    {
//        printf("闰年\n");
//    }*/
//    else
//        printf("平年\n");
//    return 0;
//}
//石头剪刀布游戏
//#include<stdio.h>
//int main()
//{
//    char a;
//    char b;
//    scanf_s("%c %c", &a, &b);
//    if (a == b)
//    {
//        printf("平局\n");
//    }
//    else if ((a == 's' && b == 'j ') || (a == 'j ' && b = 'b') || (a == 'b' && b == 's'))
//    {
//        printf("玩家赢了");
//    }
//}
//C语言逻辑运算符的特点如&&或||总是从左边开始读
//如果左边的表达式已经满足了逻辑运算符的条件则
//不在求解右侧的表达式,这种情况称为短路
//任给一个整数其余数必然是 0 || 1 || 2 
//#include<stdio.h>
//int main()
//{
//    int namb = 0;
//    scanf("%d", &namb);
//    if (namb % 3 == 0)
//    {
//        printf("余数是0\n");
//    }
//    else if (namb % 3 == 1)
//    {
//        printf("余数是1\n");
//    }
//    else
//        printf("余数是2");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int namb=0;
//    scanf("%d", &namb);
//    switch (namb % 3)
//    {
//    case 0:
//        printf("余数是0");
//        break;
//    case 1:
//        printf("余数是1");
//        break;
//    case 2:
//        printf("余数是2");
//        break;
//    }
//    return 0;
//}
// switch()表达式中必须为整型
// 因而case(n) n属于整数且必须是常量!
//需注意例case（n）情况为真switch程序并不为跳出
// 而是继续执行case（n+1）语句所以若只想执行一条语句应在case语句块
//  结尾中加上break跳出程序
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    printf("请输入今天星期几:");
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("要上课\n");
//        break;
//    case 6:
//    case 7:
//        printf("不用上课，直接学习");
//        break;
//    default:
//        printf("输入错误请输入1——7的数字");
//        break;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int namb = 0;
//    while (namb < 10)
//    {
//        namb++;
//        printf("%d ", namb);
//    }
//    return 0;
//}
//输入一个正整数按倒序输出
//#include<stdio.h>
//int main()
//{
//   unsigned int namb = 0;//unsigned int 无符号整数类型
//    scanf("%u", &namb);//%u打印正整数
//    while (namb)
//    {
//        printf("%d ", namb%10);//找到最后一位并输出
//        namb /= 10;//去掉最后一位
//    }
//    return 0;
//}
//输入一个正整数，打印所有小于等于这个正整数的正偶数
//#include<stdio.h>
//int main()
//{
//    unsigned int i = 0;
//    unsigned int namb = 0;
//    scanf("%u", &namb);
//    //for (i = 1; i <= namb; i++)
//    //{
//    //    if (i <= namb && i % 2 == 0)
//    //    {
//    //        printf("%u ", i);
//    //    }
//    //}
//    while (i < namb)
//    {
//        i += 2;
//        printf("%d ", i);
//    }
//    return 0;
//}
////模拟游戏中对boos造成伤害时对应底层代码
//#include<stdio.h>
//int main()
//{
//    int boss = 1000;
//    int harm = 150;
//    int choice = 0;
//    printf("您遇到了boss,是否挑战boos:\n");
//    do
//    {
//       
//        printf("\t1挑战/0撤退\t");
//        scanf("%d", &choice);
//        //printf("成功发起决斗！\n");
//    } while (choice != 0 && choice != 1);
//    if (choice == 1)
//    {
//        printf("成功发起决斗！\n");
//        do
//        {
//            int a = 0;
//            printf("您的下一步是?\n\t\t1攻击0撤退\t");
//            scanf("%d", &a);
//            if (a == 1)
//            {
//                int blood = (boss < harm ? boss : harm);//防止血量为负数
//                //当血量小于伤害时将血量值赋给此次伤害
//                printf("对boss造成了%d点伤害\n\n", blood);
//                boss -= blood;
//                printf("boss血量剩余%d\n\n", boss);
//                if (boss == 0)
//                {
//                    printf("\t\t\t\t\t您击败了boss!\n");
//                }
//            }
//            else if (a == 0)
//            {
//                printf("\t\t\t\t您撤退了，boss剩余血量为:%d\n", boss);
//                break;
//            }
//            else
//                printf("请输入1/0\n\n\n");
//        } while (boss > 0);//血量大于0可攻击boss
//    }
//    else if (choice == 0)
//    {
//        printf("\t\t\t\t\t撤退成功\n");
//    }
//    else
//        printf("请输入0/1");
//    return 0;
//逗号表达式就是用多个逗号隔开的表达式，执行顺序从左向右，整体表达式的结果最终用最右边的表达式决定
//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    int c = 0;
//    int b = 12;
//    c = a + 2, b=4+ a;//  ,  的优先级是最低的
//    printf("%d\n", c);
//    printf("%d\n", b);
//    return 0;
//}
///*生成1 - 100的随机数代码如下
//如果要生成a-b的随机数公式:a + rand() % (b - a + 1)
//注：%n所产生的数值区间为0——n-18*/
//#include<stdio.h>
//#include<stdlib.h>  //rand函数所需头文件
//#include<time.h>    //time函数所需头文件
//int main()
//{
//    int i = 0;
//    srand((unsigned int)time(NULL));//通过srand函数改变其种子为time
//    for (i = 0; i < 100; i++)
//    {
//        printf("第%d位随机数:", i);
//        printf("%d\n", rand()%100+1);
//    }
//    return 0;
//}
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
//如果要生成1--100的随机数公式如下：a+rand()%(b-a+1)
//注意：% n 所产生的数值区间为(0--n)   %100数值区间为（0--100）
//猜1--100数字的小游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void random()
//{ //生成随机数1--100的随机数
//    int r = rand()%100+1;
//    int i = 0;
//    int cisu = 0;
//    int a = 5;
//    while (1)
//    {
//        if (cisu < 5)
//        {
//            a--;
//            cisu++;
//            printf("请输入你要猜的数字：");
//            scanf("%d", &i);
//            {
//                if (i > r)
//                    printf("\t\t猜大了,第%d次，剩余%d\n",cisu,a);
//                else if (i < r)
//                    printf("\t\t猜小了,第%d次，剩余%d次\n",cisu,a);
//                else
//                {
//                    printf("\t\t猜对了！随机数是%d\n,一共猜了%d次", r,cisu);
//                    break;
//                }
//            }
//        }
//        else
//        {
//            printf("无次数了，游戏失败！,随机数是%d\n\n\t\t\t输\n", r);
//            break;
//        }
//    }
//}
//void caidan()
//{
//    //打印菜单
//    printf("\t\t\t---------------1.being-----------\n");
//    printf("\t\t\t---------------0.out-------------\n");
//    printf("\t\t\t-----------------------------请选择\n");
//}
//int main()
//{
//    //srand((unsigned int)time(NULL));
//    int namb;
//    do
//    {
//        srand((unsigned int)time(NULL));
//        //并不建议把随机数生成器发到循环里面，如果游戏结束过快随机数可能相同
//        caidan();
//        scanf("%d", &namb);
//        switch (namb)
//        {
//        case 1:
//            printf("游戏开始!\n");
//            random();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("选择错误请重新选择\n");
//            break;
//        }
//    } while (namb);
//    return 0;
////}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr[10] = {0};
//
//    //可直接通过sizeof()计算出数组个数，把数组个数作为循环判断
//    //  条件可有效防止数组溢出等问题
//    int sz = sizeof(arr) / sizeof(arr[1]);
//
//    //需注意数组arr本身为地址但 arr[] 为数组元素在输入时需要取地址
//    
//    //给arr5输入10个值
//    for (int i = 0; i < sz; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //输出10给值
//    for (int i = 0; i < sz; i++)
//    {
//        printf("arr[%d]的地址为：%p\n ",i, arr[i]);
//    }
//    //以下两种打印方式等价
//    //printf("%zu\n", sizeof(int[10]));
//    //printf("%zu\n", sizeof(arr));
//    ////char arr1[] = { "asdf" };
//    //char arr2[] = { 'a','s','d','f'};
//    //char arr3[] = { 'a','s','d','f','\0'};
//    //////printf("%s\n", arr1);
//    ////printf("%s\n", arr2);//打印字符串未遇到\0会一值打印知道遇到\0
//    ////printf("%s\n", arr3);
//    ////sizeof()计算操作数所占内存的大小，单位是字节
//    //printf("%d\n", sizeof(arr1));
//    //printf("%d\n", sizeof(arr2));
//    ////strlen()求字符串长度，统计的是\0之前字符的个数，遇到\0就停下
//    ////sizeof&&strlen对比前者是操作符后者是库函数需包含string,h头文件
//    //printf("%zu\n", strlen(arr1));
//    //printf("%zu\n", strlen(arr2));
//   /*for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }*/
//    return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    //将下列字符串按左右向中间靠拢的方式分批打印
//    char arr1[] = { "I am form Chiss" };
//    
//    char arr2[] = { "###############" };
//    int i = 0;
//    int lift = 0;
//    int right = sizeof(arr1)-1;
//    while (lift <= right)
//    {
//        arr2[lift] = arr1[lift];
//        arr2[right] = arr1[right];
//        lift++;
//        right--;
//        i++;
//        Sleep(1000);
//        system("cls");//清除输出的数据
//        printf("第%d次输出：%s\n",i, arr2);
//    }
//    printf("共%d次整理完毕\n", i);
//    return 0;
//   }
////折半排序法
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序的数组
//    int k = 7;// 要找的值
//    int left = 0;//最左侧下标
//
//    //一个整型占四个字节所有最右边的下标为 总字节数 / 单个数据字节数 - 1
//    int right = sizeof(arr)/sizeof(arr[0]) - 1;
//
//    int middle = 0;//下标平均值
//    //int middie = (lift + right) / 2;
//    
//    while (left <= right)
//    {
//        //为了防止数据溢出,下标求和因写成如下形式
//        int middle = left + (right - left) / 2;
//        if (arr[middle] > k)//中间值大于要找的值，舍去右边的值
//        {
//            right = middle + 1;//因为当前middle下标值已经大于k所有将middle+1赋给right
//        }
//        else if (arr[middle] < k)//中间值小于要找的值，舍去左边的值
//        {
//            left = middle + 1;//因为当前middle下标值已经小于k所有将middle+1赋给lift
//        }
//        else
//        {
//            printf("找到了下标为%d\n", middle);
//            break;
//        }
//    }
//    if (left > right)//当左下标大于右下标时找不到 k 
//        printf("找不到\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[3][5] = { 0 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    //按行打印
//    //假设 i 为行
//    for (int i = 0; i < 3; i++)
//    {
//        //假设 j 为列
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    //按列打印
//    //假设i为列
//    for (int i = 0; i < 5; i++)
//    {
//        //j为行
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//    //二维数组初始化可以省略行，编译器会自动根据 列 和 数组元素 的关系自动补齐行
//}
//#include<stdio.h>
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            //二维数组在内存中的存储是连续的
//            //这也就是二维数组不能省略列的原因，如果省略了列则编译器就不知道第二行的起始位置
//            printf("&arr[%d][%d]地址为：%p\n",i,j, &arr[i][j]);
//            //相邻的整数之间地址差4个字节
//        }
//        printf("\n");
//    }
//}
//
//随机选人程序
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//    int namb1 = 0;
//    int namb2 = 0;
//    //将种子改为时间戳
//    srand((unsigned int)time(NULL));
//    //一个班级有10个人
//    char arr[10][10] = { "小李","李峋","张三","李是","积分","多少","时代","哦怕","而是","下次" };
//    do
//    {
//        namb1 = rand() % 10;
//        namb2 = rand() % 10;
//        // %10 产生0--9的数字
//    } while (namb1 == namb2);
//    printf("随机选中的同学是：%s\n", arr[namb1]);
//    printf("随机选中的同学是：%s\n", arr[namb2]);
//    return 0;
//}
//整形平均值计算
//int average(int x, int y)
//{
//    int z = x + (y - x) / 2;
//    return z;
//}
// 简化写法
//int average(int x , int y)
//{
//    return x + (y - x) / 2;
//}
//返回较大值
//int mix(int x, int y)
//{
//    int z = 0;
//    if (x > y)
//        z = x;
//    else if (x < y)
//        z = y;
//    else
//        z = 0;
//    return z;
//}
//简化写法(两个数之间的逻辑预算优先考虑三目操作符)
//int mix(int x, int y)
//{
//    return x > y ? x : y;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //常规计算
//    //int namb = a + (b - a) / 2;
//    //调用函数计算
//    //int namb = average(a, b);
//    //未调用函数时,函数的参数称为形参（形参不会占用内存）
//    //形参是实参的一份临时拷贝
//    //形参的地址是独立的,调用函数是并不会把实参的地址给形参
//    //即使形参的名字和实参一样其对应地址也是独立的
//    int zuizhi = mix(a, b);
//    //printf("%d\n", namb);
//    printf("%d\n", zuizhi);
//    return 0;
//}
//打印1000年到2000年之间的闰年
//判断1：能被4整除，但不能被100整除
//判断2：能被400整除
//#include<stdio.h>
//int main()
//{
//    int age = 1000;
//    for (age = 1000; age <= 2000; age++)
//    {
//        if (age % 4 == 0 && age %100 != 0)
//        {
//            printf("%d是闰年 ", age);
//        }
//        else if (age % 400 == 0)
//            printf("%d是闰年 ", age);
//    }
//    return 0;
//}
//#include<stdio.h>
//int ss(int x)
//{
//    if (x > 0)
//        return 1;
//    else
//        return 0;
//
//}
//int main()
//{
//    int v = 100;
//    ss(v);
//    printf("%d\n", v);
//}
//将一个数组中的所有元素设置成－1
//#include<stdio.h>
//void set_arr(int aaa[10], int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        aaa[i] = -1;
//    }
//}
// x 表示数组为10元素的整形数组, y 表示数组有10个元素
//此处的数组形参可以不写因为 y 已经初始化了元素个数
//void prin_aaa(int aaa[10], int sz)//函数参数初始化
//{
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", aaa[i]);
//    }
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    set_arr(arr, sz);
//    //数组传参的时候传递数组名即可,如果带索引了则只会传递一个数组元素
//    prin_aaa(arr, sz);
//    return 0;
//}
//#include<stdio.h>
//void  prin_arr(int arr[3][5], int x,int y)
//{
//    int j = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr1[3][5] = { 0 };
//    prin_arr(arr1,3,5);
//}
//#include<stdio.h>
////判断是否为闰年
////判断1：能被4整除，但不能被100整除
////判断2：能被400整除
//int of_runnian(int age)
//{
//    if (age % 4 == 0 && age % 100 != 0 || age % 400 == 0)
//        return 1;
//    else
//        return 0;
//}
//int get_age(int x, int y)
//{
//    int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (of_runnian(x))
//        arr[y]++;
//    return arr[y];
//}
//int main()
//{
//    int age = 0;//年
//    int mot = 0;//月
//    printf("请输入年(1000--3000)/月(1--12)");
//    scanf("%d%d", &age, &mot);
//    int r = get_age(age, mot);
//    printf("%d年%d月有%d天", age, mot,r);
//    return 0;
//}
//#include<stdio.h>
////函数申明
////若想提前调用函数必须声名
//void a();
//int main()
//{
//    printf("%d\n ", printf("%d ", printf("%d ", 43)));
//    a();
//    //printf()的返回值是输出的字符数量
//}
//void a()//函数定义( 本身也是一种申明 )
//{
//    printf("fsfds");
//}
// static 将栈区的变量转移至静态区拉长变量的生命周期
//栈区的生命周期在出了自己的作用域就销毁，而静态区
//的生命周期和程序共生只有在程序结束后才销毁
// 例 
//#include<stdio.h>
//int add(int a)
//{
//    static int i = 0;//static将变量 i 存放至静态区及时出了该作用域也不会立即销毁
//    //当 i 本身作用域不会改变，只作用于 add 函数
//    i++;
//    return i;
//}
//int main()
//{
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ",add(i));
//    }
//}
// extern 关键字 申明使用外部变量
//如果外部变量被 static修饰到静态区了则
// extern 无法在申明外部符号
//被 static 修饰的函数同理
//函数和变量本省具有外部链接属性若被static修饰则不再具有

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        //个位数的9可通过%19取得 例：
//        //19%10=9 49%10=9
//        if (i % 10 == 9)
//        {
//            a++;
//            printf("%d个位出现了9\n",i);
//        }
//        //十位上的9可通过整除10获得 例：
//        //91/10=9  95/10=9
//        if (i / 10 == 9)
//        {
//            a++;
//            printf("%d十分位出现了9\n", i);
//        }
//    }
//    printf("一共出现了%d次\n\n", a);
//    return 0;
//}
//求10个整数中最大值
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//    int i = 0;
//    // srand()调用time种子 将种子改为时间戳
//    srand((unsigned int)time(NULL));
//    int arr[10];
//    //给数组赋随机值
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = rand();
//        printf("第%d位：%d\n", i + 1, arr[i]);
//    }
//
//    //假设max为最大值
//    int max = arr[0];
//    int weizi = 1;
//    for (i = 1; i < 10; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//            weizi = i + 1;
//        }
//    }
//    printf("\n");
//    printf("最大值为:%d,是第%d位数字\n", max,weizi);
//    return 0;
//}
//在屏幕上输出9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int a = 0;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= 9; j++)
//        {
//            a = j * i;
//            printf("%d*%d=%d ",j,i, a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 3;
//    while (i)
//    {
//        printf("hh\n");
//        i--;
//    }
//}

//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//    float j = 0;
//    float o = 0;
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 != 0)
//        {
//            j = j + 1.0/i;
//        }
//        else
//        {
//            o = o + 1.0 / i;
//        }
//    }
//    float namb = j - o;
//    printf("%f", namb);
//    return 0;
//}

//写一个代码：打印100~200之间的素数
//素数定义：一个大于 1 的自然数 p，如果它的正因数只有1 和p 两个，那么p 就是素数
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (i % 1 == 0 && i % i == 0)
//            printf("%d ", i);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    char s = 'a';
//    int arr[] = { 1,2,3,4,5 };
//    size_t  count = sizeof(arr) / sizeof(arr[1]);
//    for (i = 0; i < count; i++)
//    {
//        arr[i] = 1+i;
//        printf("%d ", arr[i]);
//    }
//}
//求N的阶乘
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int namb = 1;
//    scanf("%d", &n);
//    for (i = 2; i <= n; i++)
//    {
//        //namb = namb * i;
//        namb *= i;
//    }
//    printf("%d ", namb);
//}
//  求N的阶乘的和
//#include<stdio.h>
//int main()
//{
//    int n =0;
//    int i = 1;
//    int sum = 1;
//    int namb = 0;
//    int a = 0;
//    scanf("%d", &n);
//    //先产生1--N的数
//    for (i = 1; i <= n; i++)
//    {
//        sum = 1;
//        //在产生每个数的阶乘
//        for (a = 1; a <= i; a++)
//        {
//            sum = sum * a;
//        }
//        namb += sum;
//    }
//    printf("%d ", namb);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("hehe\n");
//    main();
//}
//利用函数递归计算N的阶乘
//int fact(int n)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * fact(n - 1);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int namb=fact(n);
//    printf("%d ", namb);
//    return 0;
//}
//输入一个整数按正序分别打印每一位
//void prin(int x)
//{
//    //设置递归终止条件
//    if (x > 9)
//    {
//        prin(x / 10);//顺序执行
//    }
//    printf("%d", x % 10);
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    prin(n);
//}
//输入一个整数按倒序分别打印每一位
//void prin(int n)
//{
//    printf("%d ", n % 10);
//    if (n > 9)
//    {
//        prin(n / 10);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    prin(n);
//}
//求第N个费波纳技术(递归）
//int count = 0;
//int get(int n)
//{
//    if (n == 3)
//        count++;
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    return get(n - 1) + get(n - 2);
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d",get(n));
//    printf("\nget(3)出席的次数：%d ", count);
//    return 0;
//}
//求第N个费波纳技术(循环）
//int get(int n)
//{
//    int a = 0;
//    int b = 1;
//    int c = n;
//    while (n >= 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d ",get(n));
//}
//写一个代码：打印100~200之间的素数
//素数定义：大于1的整数，除了1和它本身外没有其它正因数.
//#include<stdio.h>
//int main()
//{
//	int namb = 0;//素数数量
//	int j = 1;//假设j=1时为素数
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)//素数不会是偶数直接找奇数部分就可以
//	{
//		//判断是否为素数
//		//不用找到i-1项找最小因子根号i即可
//		for (j = 3; j * j <= i; j++)
//		{
//			if (i % j == 0)//不是素数
//			{
//				j = 0;
//				break;//只要有一个被整除了就直接关闭循环
//			}
//		}
//		if (j)
//		{
//			namb++;//记录素数出现的次数
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("一共有%d个素数\n", namb);
//	return 0;
//}
//给定两个数，求这两个数的最大公约数
//欧几里得算法：用大数%小数，在用小数%余数，当余数为零时，打印除数
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int r = 0;
//    scanf("%d%d", &a, &b);
//    if (a < b)//保证 a 始终是较大的
//    {
//        r = b;
//        b = a;
//        a = r;
//    }
//    while (b!=0)
//    {
//        r = a % b;
//        a = b;
//        b = r;
//    }
//    printf("最大公约数是：%d\n", a);//余数为零时打印除数
//    return 0;
//}
//C语言分支循环语句
//输出某小组成语的成绩
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    char namb[5][5] = {"小a","小b","小c","小d","小e"};//小组成员
//    int arr[5] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%s的成绩为：%d\n", namb[i], arr[i]);
//    }
//    printf("其中及格的同学有：\n");
//    for (i = 0; i < 5; i++)
//    {
//        if (arr[i] >= 60)
//        {
//            printf("%s\n", namb[i]);
//        }
//    }
//    return 0;
//}
// 打印100--200的素数
//素数定义：大于1的整数，除了1和它本身外没有其它正因数.
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int namb = 1;
//    for (i = 100; i <= 200; i++)//先生成100--200的数字
//    {
//        namb = 1;
//        for (j = 2; j < i; j++)//判断是否为素数
//        {
//            if (i % j == 0)
//            {
//                namb = 0;
//                break;
//            }
//        }
//        if (namb)
//        {
//            printf("%d ", i);
//        }
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };//arr[2]的值是4
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//【一维数组】输入10个整数，求平均值
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int arr[10] = { 0 };
//    int d = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//         a = a + arr[i];
//    }
//    printf("%d", a / d);
///将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//    int namb = 0;
//    int i = 0;
//    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//    int arr2[10] = {10,9,8,7,6,5,4,3,2,1};
//    printf("arr1的值:");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    printf("\narr2的值:");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n交换后的值:");
//    for (i = 0; i < 10; i++)
//    {
//        namb = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = namb;
//    }
//    printf("\n交换后的值:\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    int i = 0;
//    int j = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    //arr1的值都小于arr2则单独打印arr2的值
//    while (j < m)
//    {
//        printf("%d ", arr2[j]);
//        j++;
//    }
//    while (i < n)
//    {
//        printf("%d ", arr1[i]);
//        i++;
//    }
//    return 0;
//}
//生成一个1--100之间的数
//#include<stdio.h>
//#include<stdlib.h>//rand()函数所需头文件
//#include<time.h>  //time()函数所需头文件
////srand调用时间戳
////一个数 % n产生0 -- n-1的数值区间
//int main()
//{
//    int i = 0;
//    srand((unsigned int)time(NULL));//调用时间戳种子
//    int namb = rand()%100+1;
//    printf("请输入您要猜的数字:\n");
//    printf("%d\n", namb);
//    do
//    {
//        scanf("%d", &i);
//        if (i == namb)
//        {
//            printf("游戏结束，您猜对了\n");
//            printf("随机数是%d",namb);
//        }
//        else
//        {
//            printf("您猜错了!\n");
//
//        }
//    } while (i != namb);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a,i,j;
//    while (scanf("%d", &a) != EOF) {
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < a; j++)
//            {
//                if (i == 0 || j == 0||i==a-1||j==a-1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n, m, i, j;//n行m列
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][m]);
//        }
//    }// n 行 M 列 变 m 行 n 列
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//实现函数判断year是不是润年。
//void judge(int year)
//{
//    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//    {
//        printf("%d是闰年\n", year);
//    }
//    else
//        printf("%d不是闰年\n", year);
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    scanf("%d", &year);
//    judge(year);
//    return 0;
//}
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//  如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void muit(int n)
//{
//    int i, j;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d ", i * j);
//        }
//        printf("\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    muit(n);
//    return 0;
//}
//实现一个函数is_prime，判断一个数是不是素数。
//  利用上面实现的is_prime函数，打印100到200之间的素数。
//素数是指大于1的自然数中，除了1和它本身以外，不再有其他因数的数。
//int is_prime(int i)
//{
//    int j = 2;
//    for (j = 2; j < i; j++)
//    {
//        if (i % j == 0)
//            return 0;
//        return 1;
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i, j = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i))
//        {
//            printf("%d 是素数\n", i);
//        }
//    }
//    return 0;
//}
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//int i = 0;
//void init(int arr[10],int x)
//{
//    int i = 0;
//    for (i = 0; i < x; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void print(int arr[10], int x)
//{
//    for (i = 0; i < x; i++)
//    {
//        printf("第%d个数组元素是%d\n",i+1, arr[i]);
//    }
//}
//void reverse(int arr[10], int x)
//{
//    int lift = 0;
//    int aaa;
//    int right = x-1;
//    while (lift < right)
//    {
//        aaa = arr[right];
//        arr[right] = arr[lift];
//        arr[lift] = aaa;
//        lift++;
//        right--;
//   }
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    print(arr, 10);
//    reverse(arr, 10);
//    printf("\n");
//    print(arr, 10);
//    return 0;
//}
//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字
//int bin_search(int arr[], int left, int right, int key)
//{
//    int middle = 0;
//    while (left <= right)
//    {
//        middle = (left + right) / 2;
//        if (key > arr[middle])
//        {
//            left = middle + 1;
//        }
//        else if (key < arr[middle])
//        {
//            right = middle - 1;
//        }
//        else
//            return middle;
//    }
//    return -1;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int key;
//    int len = sizeof(arr) / sizeof(arr[1])-1;
//    scanf("%d", &key);
//    int r=bin_search(arr, 0, len, key);
//    if (r != -1)
//    {
//        printf("找到了下标是%d\n", r);
//    }
//    else
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//分析：可买20瓶汽水,喝完后的20个空瓶子可换10瓶汽水，喝完10瓶后可在换5瓶汽水，
//          喝完5瓶后在换2瓶汽水，喝完两瓶后在换1瓶汽水，多一个空瓶子 
//int count(int money)
//{
//    int count = money;//喝了count瓶
//    int empty = money;//空瓶子
//    while (empty > 1)
//    {
//        count = count + empty / 2;
//        empty = empty / 2 + empty % 2;
//    }
//    return count;
//}
//int count2(int money)
//{
//    return 2 * money - 1;
//}
//#include<stdio.h>
//int main()
//{
//    printf("一共喝了%d瓶汽水\n ", count2(20));
//    printf("一共喝了%d瓶汽水\n ", count(7));
//    printf("一共喝了%d瓶汽水\n ", count(9));
//    return 0;
//}
//void print2(int x)//(下半部分)
//{
//    int i = 0;//行
//    for (i = x-1; i >= 0; i--)
//    {
//        int empty = x - i - 1;//空格数量
//        int star = i * 2 + 1;//星数量
//        while (empty != 0)//先打印空格
//        {
//            printf(" ");
//            empty--;
//        }
//        while (star != 0)//在打印星
//        {
//            printf("*");
//            star--;
//        }
//        printf("\n");
//    }
//}
//void print(int line)//接收行号(上半部分)
//{
//    //分两部分处理，先处理上半部分
//    for (int i = 0; i < line; i++)
//    {
//        int empty = line - i - 1;//空格数量
//        int star = i * 2 + 1;//星号数量
//        while (empty != 0)
//        {
//            printf(" ");
//            empty--;
//        }
//        while (star!=0)
//        {
//            printf("*");
//            star--;
//        }
//        printf("\n");
//    }
//    //下半部分(共line - 1 行)
//    print2( line );
//}
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    printf("请输入菱形的行数/2\n");
//    printf("如打印10行则输入5\n");
//    scanf("%d", &count);
//    print(count);
//}

//指针学习
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
    //int a = 10;
    //int* p = &a;//其中int 表示p指向的对象是整形类型，*则表示p是指针变量。
    //printf("%d\n", a);
    //printf("%d", *p);
    //int a = 12;
    //int* p = &a;
    //printf("%p\n", a);
    //printf("%p\n", *p);
    //printf("\n\n");
    //printf("%d\n", a);
    //printf("%d\n", *p);
    //*p = 20;//*是解引用操作符
    //// *(单目操作符) *p就是调用p所指向的数据值
    //printf("%d\n", a);
    //printf("%d\n", *p);
    //printf("%zu\n", sizeof(char*));
    //printf("%zu\n", sizeof(int*));
    //printf("%zu\n", sizeof(float*));
    //printf("%zu\n", sizeof(double*));
    ////C语言中指针变量的长度和数据类型无关
    ////指针存放的地址是数据的首地址
    ////指针是存放地址的地址多大指针首地址就多大
    ////一个16进制位占4个比特位（两个占一个字节）
    ////int n =  0x11223344;//这种16进制写法可刚刚好把 n 变量给占满
    ////int* p = &n;
    ////*p = 0;
    //int n = 0x11223344;//这种16进制写法可刚刚好把 n 变量给占满
    //char* p = (char*) & n;
    //*p = 0;//只会将 n 的首地址字节（11）改了应为char数据只占一个字节
    // 0x 表示将后续数字写成16进制
    //char*类型的指针引用只能访问一个字节，int则4个
    //int n = 10;
    //char* a = (char*) & n;
    //int* b = &n;
    //printf("%p\n", &n);
    //printf("%p\n", a);
    //printf("%p\n\n\n", b);
    //printf("%p\n", a + 1);//char*类型加1地址增加1位字节
    //printf("%p\n", b + 1);//int*类型加1地址增加4位字节
    // void* 是无类型指针可以用来接收任何类型的指针
    //需注意void类型的指针无法执行赋值或加减等操作因为void是无类型指针
    // 直接进行对其进行加减其地址不知道跳过多少字节
    //int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    //int i = sizeof(arr) / sizeof(arr[0]);
    ///*for (int j = 0; j < i; j++)
    //{
    //    printf("%d ", arr[j]);
    //}*/
    //int* p = &arr[0];//取数组首地址（数组在内存中是连续存放的）
    //for (int j = 0; j < i; j++)
    //{
    //    // p + j跳过 j 个元素直接
    //    //printf("%d ", *p+j);// p + j 表示下标为 j 的地址(通过 * 解引用操作符指向其对应元素)
    //    printf("%d ", *p);
    //    p++;
    //}
    /*char arr[] = "zxcvb";
    size_t len = strlen(arr);
    printf("%zu\n", len);
    printf("%zu\n", len);*/
//}
//利用指针模拟实现strlen函数功能
//strlen函数使用需包括<string.h>头文件，其功能是计算/0之前的字符串长度
// 一但遇到/0便会直接停止
//#include<stdio.h>
//size_t my_strlen(char* p)//函数形参设置成char*类型用于接收实参
//{
//    size_t count = 0;//设置计时器
//    while (*p != '\0')//循环执行条件设置成解引用数据不等于'/0'
//        //循环条件可直接写成 *p 因为一旦 *p 等于 '\0' 时，其ASALL值就是0；则循环条件为假。
//    {
//        count++;
//        p++;//指针往后走
//    }
//    return count;//返回计时器
//}
//int main()
//{
//    char arr[] = "zfsfs";
//    size_t len = my_strlen(arr);//数组名就是数组的首地址
//    printf("字符串长度：%zu\n", len);
//}
//指针1--指针2可以得到两指针之间的数据个数（必须是同一内存）
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8 };
//    printf("%d ", &arr[5] - &arr[0]);
//}
//可利用以上方式实现第二种strlen
//#include<stdio.h>
//size_t my_strlen(char* s)
//{
//    char* a = s;
//    while (*s)//只要不等于 '\0' 就执行循环'\0'的ASCLL值等于0
//    {
//        s++;
//    }
//    return s - a;
//}
//int main()
//{
//    char arr[] = "zcsdvs";
//    size_t len = my_strlen(arr);
//    printf("%zu ", len);
//}
//用while指针形式遍历一维数组
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int* p = &arr[0];
//    while (p < &arr[len])//地址由底到高
//        //这里循环条件数组一定要取地址，因为arr[len]表示的是arr[len]这个元素而非地址
//    {
//        printf("%d ", *p);
//        p++;
//    }
//}
//利用函数写一个交换两整数变量的值
//#include<stdio.h>
//void swap1(int a, int b)//错误写法（改变函数形参无法改变实参的值）
////类型形参在创建时是单独创建地址拷贝实参的内容（数组是例外）
//{
//    int c = 0;
//    c = a;
//    a = b;
//    b = c;
//}
//void swap2(int* p1, int* p2)//正确写法（利用指针改变）
//{
//    int c = *p1;
//    *p1 = *p2;
//    *p2 = c;
//    
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("交换前:");
//    printf("%d ", a);
//    printf("%d\n ", b);
//    printf("交换后:");
//    // 传值调用
//    //swap1( a, b);//错误写法
//    // 传址调用
//    swap2(&a, &b);//正确写法（利用指针改变a,b的值）
//    printf("%d ", a);
//    printf("%d ", b);
//}
//二级指针的预习：int* p（其中Int表示p指向的变量是Int ，*则表示p是指针标量）
//  通过以上可得出int* *p1(int*表示p指向的变量是int* ，*则表示p1是指针标量）
//    利用函数写一个交换两整数变量的值
//#include<stdio.h>
//int main()
//{
//    int p = 10;
//    int* p1 = &p;
//    int** pp1 = &p1;
//    int*** ppp1 = &pp1;
//    //打印p对应值的方式
//    printf("%d\n", p);
//    printf("%d\n", *p1);
//    printf("%d\n", **pp1);
//    printf("%d\n", ***ppp1);
//}
//ESP表示底地址
//EBP表示高地址
//popEBD表示把栈顶的数据弹出来放到EBD里面

//结构体学习
//#include<stdio.h>
//int main()
//{
//    //struct申明结构体变量
//    struct Stu
//    {
//        char name[10];//名字
//        int namb;//学号
//        int age;//年龄
//        char sex[8];//性别
//    };//s1;//创建结构体变量 1
//    struct Stu s1 = { "小明",20250833016261,19,"男" };//初始化结构体变量(按顺序完全初始化)
//    //不按顺序完全初始化如下：
//    struct Stu s2 = { .namb = 20250833010262,.namb = "朱",.age = 19,.sex = "男" };
//    //按顺序不完全初始化
//    struct Stu s3 = { "李氏",20250833010262 };//未初始化的数据全部为0
//    struct Stu s4 = { .age = 19,.name = "许",.namb = 20250833010262,.sex = "女" };
//    //一个小点：
//    // 例如 int arr1[5] ; int arr2[6] ; 
//      //将 arr1 = arr2 这种写法是错误的 ， 数组无法整体赋值 ， 因为数组名是数组的首地址（地址类似常量） ， 
//      // 无法将地址赋给地址
//    //但结构体变量可整体赋值如借用上反代码的结构体变量：
//    // 可将 s1 = s2 这种写法是正确的(类似变量可以赋值给变量）
//
//    //打印结构体(s1)
//    //其中 . 为结构体成员访问操作符(用法: 结构体变量 . 成员名)
//    //printf(" 姓名：%s\n 学号：%d\n 年龄：%d\n 性别：%s\n", s1.name, s1.namb, s1.age, s1.sex);
//    //通过指针来访问结构体变量
//    struct Stu* p = &s3;
//
//    printf("%s\n", (*p).name);
//    printf("%s\n", p->name);//表示 p 所指向的地址的数据变量
//    // -> 使用方法：结构体指针 -> 结构体成员名
//    //以上两种写法完全相等
//}
//结构体函数传参
//#include<stdio.h>
//struct namb//结构体变量声名
//{
//    int arr[1000];
//    int a;
//};
//
////结构体传参的时候并不推荐传递参数，因为如果结构体过大传参时浪费太多空间(推荐传址)
//void print(struct namb q)//函数声名(传值调用)
//{
//    /* for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", q.arr[i]);
//     }*/
//    int count = 0;
//    while (q.arr[count] != 0)//推荐写法
//    {
//        printf("%d ", q.arr[count]);
//        count++;
//    }
//    printf("\n");
//    printf("%d\n", q.a);
//}
//void print2(struct namb* p)
//{
//    int count = 0;
//    while ((*p).arr[count] != 0)
//    {
//        printf("%d ", (*p).arr[count]);
//        count++;
//    }
//    printf("\n");
//    printf("%d\n", p->a);
//}
//int main()
//{
//    struct namb s1 = { {1,2,3,4,5},100 };
//    print(s1);//打印结构体变量(传值调用)
//    print2(&s1);//打印结构体变量(传址调用)
//    return 0;
//}

//计算机底层程序设计
//在计算机中 0 表示正， 1 表示负
//关于计算机 原码 反码 补码 (二进制)
//  ： 正整数的 原 反 补 完全一致
// 原码：将整数按正负号直接翻译成二进制的就是原码
// 反码：将原码的符号位不变，其余为全部取反得到反码
// 补码：反码加 1 得到补码
   //注：原码变补码都可以通过 取反后加一
   //    有符号整数的 4 个字节其中 32 个 bit 位中首个为符号位，其余为数值位
//而一个无符号整数中32个bit均为数值位 ,则可以从中得出无符号整数数值位比有符号整数多一位(存储数据大一倍)
//整数存放在内存中的就是 补码 (原因是CPU只能进行加法，需通过反码进行运算)
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;//一个16进制位等于4个二进制位(4bit)，两个16进制位刚好是一个字节
//}
//小端字节 存储 模式：低位字节存低地址，高位字节存高地址（指的是百分为，十分位等,后者是内存的高低）
//大端字节 存储 模式：高位字节存低地址，底位字节存高地址（指的是百分为，十分位等,后者是内存的高低）
//      其中小端字节 存储 模式为计算机主流模式，大端字节 存储 模式一般用在 网络字节序
//写一个函数判断该机器是大端还是小端
//#include<stdio.h>
//void judge()
//{
//    // 1 的十六进制:0 x 00 00 00 01
////假设地址 底------------高
// //则大端为00 00 00 01，小端为01 00 00 00（）
//    int a = 1;//0 x 00 00 00 01
//    char* p = (char*)&a;
//    if (*p == 1)
//    {
//        printf("您的设备为：小端\n");
//    }
//    else
//    {
//        printf("您的设备为：大端\n");
//    }
//}
////此函数总体思路为：依靠 1 存放地址为：0 x 00 00 00 01
////小端为01 00 00 00;大端为：00 00 00 01，则可以通过指针取出第一位字节判断是否为 1 即可
//int main()
//{
//    judge();
//}
//存储在内存中的数据只要大于一个字节就会涉及到大小端存储模式
//判读数据存储在内存中的方式是否是补码
//#include<stdio.h>
//int main()
//{
//    int a = -1;
//    //原码：10000000000000000000000000000001
//    //反码：11111111111111111111111111111110
//    //补码：11111111111111111111111111111111
//    //四个二进制位占一个十六进制位：EEEEEEEE
//    //调式验证即可
//}
//左移右移操作符都是以二进制补码的形式移位的
// 无符号整形左移操作符条件是任意的
// 有符号整形左移操作符条件是移位距离大于等于0并且不能溢出（如一个整形有32个bit，则不能移至
//32个bit外）
//向左移动最左边抛弃最右边补零
//浮点数在内存中的存储（以float为例）
//#include<stdio.h>
//int main()
//{
//    float a = -9.5;
//    // -9.5 转二进制 = -1001.1
//    //转科学计数法 = -1.0011 * 2^3(假设 V 为符号位（ 0 为正 1 为负），M为大于等于 1且小于 2 的数，E为指数位)
//    //则 V = 1, M =1.0011, E = 3 ; 按浮点数32为存储，其中第一位为符号位，其次8位为指数(32位指数存储时加127)，
//    // 在后者23位为M位（M只存储小数部分）则可推测出内除中存储中为：1100 0010 0001 1000 0000 0000 0000 0000
//     //转十六进制=0 x C1 18 00 00 00 00 
//    //64位浮点数 E 位11， M 位54位（其余和32位一样）
//}
//移位
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    //补码 00000000000000000000000000001010
//    int b = a >> 1;//向右移位向下取整
//  //移动后 00000000000000000000000000000101
//    //a 向右移动 b 位== a / 2^b(逻辑移位)
//    //不能移动负数位
//    printf("%d\n", b);
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    //整数源 反 补相同 00000000000000000000000000001010
//    int b = -7;
//    //原码 10000000000000000000000000000111
//    //反码 11111111111111111111111111111000
//    //补码 11111111111111111111111111111001(取反后加一)
//    int c = a & b;//( & 逻辑与运算符号 双一才一，不然零)//只对应二进制整数位
//    //a = 00000000000000000000000000001010
//    //b = 11111111111111111111111111111001
//  //a&b = 00000000000000000000000000001000 == 8
//    printf("a & b == %d\n", c);//打印 c 原码（整数源 反 补相同）
//    int d = a | b;//( | 逻辑或运算符号 双0才0，不然1)//只对应二进制整数位
//    //a = 00000000000000000000000000001010
//    //b = 11111111111111111111111111111001
//  //a|b = 11111111111111111111111111111011 原码 (第一位是1为负数)
//  // 补码=10000000000000000000000000000101 == -5
//    printf("a | b == %d\n", d);
//    int e = a ^ b;//( ^ 异或操作符相异为 1 ，相同 0 )
//   //a = 00000000000000000000000000001010
//   //b = 11111111111111111111111111111001
// //a^b = 11111111111111111111111111110011（补码）
////反码 = 10000000000000000000000000001100
////补码 = 10000000000000000000000000001101 == 13
//    printf("a |^ b == %d\n", e);
//    printf("~0 == %d\n", ~0);// ~ 取反操作符（将二进制中的 0 变 1 包括符号维） 
////将零取反得到：11111111111111111111111111111111（此事位补码）
//    //原码打印式：10000000000000000000000000000001 == -1
////小结：
//    //( & 逻辑与运算符号 双一才一，不然零)//只对应二进制整数位
//    //( | 逻辑或运算符号 双0才0，不然1)//只对应二进制整数位
//    //(^ 异或操作符相异为 1 ，相同 0)
//    // ~ 取反操作符(将二进制中的 0 变 1 （包括符号位）)
//}
//一个小思路交换 a 与 b 的值（不依靠第三变量)
#include<stdio.h>
int main()
{
    int a = 30; 
    int b = 10;
    a = a - b;//此时a为20
    b = a = b;//此时b为30等于a的初值
    a = b - a;//此时a为10等于b的初值
    printf("%d%d\n", a, b);
    //该思路不考虑溢出的情况
    //考虑溢出的情况可用 ^ 操作符
    
}