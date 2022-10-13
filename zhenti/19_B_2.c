// s1=1,s2=1+3.s3=1+3+5,s4=1+3+5+7,... sn=1+3+5+7+...+(2n-1)
//编程求s1+s2+s3+s4+..+sn的值<20000时n的最大值
#include <stdio.h>
//计算每个s的值
int func(int i)
{
    int sum = 0;
    int t = 1;
    while (i--)
    {
        sum += t;
        t += 2;//公差为2的等差数列
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int sum = 0;
    int n;
    for (n = 1; sum < 20000; n++)
    {
        sum += func(n); //累加每个s的值
    }
    printf("%d", n);
    return 0;
}
