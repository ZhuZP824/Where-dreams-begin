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