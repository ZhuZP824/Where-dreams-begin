#define _CRT_SECURE_NO_WARNINGS

//折半排序法

#include<stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序的数组
    int k = 7;// 要找的值
    int left = 0;//最左侧下标

    //一个整型占四个字节所有最右边的下标为 总字节数 / 单个数据字节数 - 1
    int right = sizeof(arr) / sizeof(arr[0]) - 1;

    int middle = 0;//下标平均值
    //int middie = (lift + right) / 2;

    while (left <= right)
    {
        //为了防止数据溢出,下标求和因写成如下形式
        int middle = left + (right - left) / 2;
        if (arr[middle] > k)//中间值大于要找的值，舍去右边的值
        {
            right = middle + 1;//因为当前middle下标值已经大于k所有将middle+1赋给right
        }
        else if (arr[middle] < k)//中间值小于要找的值，舍去左边的值
        {
            left = middle + 1;//因为当前middle下标值已经小于k所有将middle+1赋给lift
        }
        else
        {
            printf("找到了下标为%d\n", middle);
            break;
        }
    }
    if (left > right)//当左下标大于右下标时找不到 k 
        printf("找不到\n");
    return 0;
}