//从键盘输入100个整型数据，找出其中最大值并且显示出来
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    //一种是用while循环100，另一种则是设置一个数组，赋值完后，遍历数组找出最大值
    int i = 0, t, max = 0;
    srand((unsigned)time(NULL)); //随机数种子
    while (i < 100)
    {
        // scanf("%d",&t);
        t = rand() % 80; //产生随机数
        printf("%-3d", t);
        if (t > max)
        {
            max = t;
        }
        i++;
    }
    putchar('\n');
    printf("max is : %d", max);
    return 0;
}
