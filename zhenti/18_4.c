//猴子吃桃问题
/*
第一天吃了一半+1个，以后的每一天都吃了前一天的一半+1个
到第十天时只剩下一个
问开始有多少个桃子
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum=1;//最后一天的桃子数目
    for (int i = 0; i < 10; i++)
    {
        sum=(sum+1)*2;//逆向向上计算每天多+1个*2倍
    }
    printf("%d",sum);
    
    return 0;
}
