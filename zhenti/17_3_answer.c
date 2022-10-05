//设置一个计数器遍历目标数组当计数为3时将目标数组值置为0，同时计数器也置0，直到剔除n-1人时，剩下的为一个不为0的数组元素为所求
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fun(int n); //函数声明
    int n;
    printf("请输入总人数: ");
    scanf("%d", &n); //获取人数
    printf("留下的是%d号\n", fun(n));
    return 0;
}
int fun(int n)
{
    int r[n], i, num = 0, time = 0;
    int *p = r; //指针指向数组
    for (i = 1; i < n + 1; i++)
    {
        r[i - 1] = i; //编号0~n
    }
    //这里设置个while循环保证内层循环持续进行直到剩下最后一个，内层循环完第一次后再重新将p指向r，而r中已经保留了前一次在内层循环中操作
    //这一步确实没想到，这样就能保证一直循环
    while (1)
    {
        for (i = 0, p = r; i < n; i++, p++) //每轮初始化，p指向a[0]
        {
            if (*p != 0) //该人有没有被出局
                num++;   //没被踢出则报数
            if (num == 3)
            {
                *p = 0;  //标记该人被踢出
                num = 0; //计数器置0
                time++;  //记录出局人数
            }
        }
        if (time == n - 1)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] != 0) //找到没有被踢出的那一个
        {
            return (i + 1); //返回他的号码
        }
    }
}
