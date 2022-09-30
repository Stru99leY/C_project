//输出10000以内的回文式素数，并统计个数
#include <stdio.h>
#define N 10000
//判断是否为素数
int isprime(int i)
{
    for (int k = 2; k < i; k++)
    {
        if (i % k == 0) //进入此循环说明不是素数，返回0
        {
            return 0;
            break;
        }
    }
    return 1;
}
//这里是我自己写的，答案是对的但是相对来说只适用这一种情况，而答案所给的方法具有普遍性可以适用多种情况
/*
从1~10,10~100,100~1000,1000~10000依次判断，属于是最蠢的办法了
int main(int argc, char const *argv[])
{
    int t = 0; //记录个数
    for (int i = 2; i <= N; i++)
    {
        if (i < 10 && isprime(i))
        {
            t++;
        }
        if (i >= 10 && i < 100)
        {
            if (i % 10 == i / 10 && isprime(i))
            {
                t++;
            }
        }
        if (i >= 100 && i < 1000)
        {
            if (i % 10 == i / 100 && isprime(i))
            {
                t++;
                // printf("%5d",i);
            }
        }
        if (i >= 1000 & i < 10000)
        {
            if (i % 100 == i / 100)
            {
                //printf("%5d", i);
                if (isprime(i))
                {
                    t++;
                }
            }
        }
    }
    printf("%6d", t);
    return 0;
}
*/
//答案提供的判断回文数
int reverse(int n)
{
    int s = 0;
    while (n)
    {
        //这里实现的就是把一个数逆转
        s = s * 10 + n % 10;
        n = n / 10;
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int c = 0;
    for (int i = 2; i < N; i++)
    {
        if (isprime(i) && i == reverse(i))
        {
            printf("%-5d", i);
            c++;
        }
    }
    putchar('\n');
    printf("回文式个数为:%d", c);
    return 0;
}
