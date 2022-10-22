//计算e的大小e=1+1/1+1/2!+1/3!+....
#include <math.h>
#include <stdio.h>

double fun(double x, double eps)
{
    double sum = 1.0, m = 1.0, t;
    int i = 1;
    do
    {
        m = m * i;         //计算下一个数的阶乘
        t = pow(x, 1) / m; //这个pow函数没用啊，x输入1，1的一次方
        sum += t;
        i++;
    } while (t > eps);
    return sum;
}
int main(int argc, char const *argv[])
{
    printf("%f", fun(1, 1e-6));
    return 0;
}
