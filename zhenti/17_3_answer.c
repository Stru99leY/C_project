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
