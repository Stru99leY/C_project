//求出9到499之间的所有非偶数非素的数之和
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int tag = 0, sum = 0;
    for (int i = 9; i < 500; i++)
    {
        tag = 0;
        for (int k = 2; k < i; k++)
        { //大于1且小于自身因素判断
            if (i % k == 0)
            {
                tag = 1; //标记变量若进入该语句说明不是素数
                break;
            }
        }
        if (tag == 1 && i % 2) //非素数非偶数
        {
            sum += i;
        }
    }
    printf("%-4d", sum);

    return 0;
}
