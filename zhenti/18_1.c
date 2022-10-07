//将一个单精度的数插入已有11个按递减顺序排列的数组，使插入该单精度数后数组任然保持递减
#include <stdio.h>
void insert(float num[13], float new)
{
    int t = 11;//目前最后一个元素的下标
    for (int k = 0; k <= t + 1; k++)
    {
        if (new >= num[k])
        {
            int j = t;
            while (j >= k)
            {
                num[j + 1] = num[j]; //最后一个元素后移
                j--;
            }
            num[k] = new;//将new插入数组
            break;//插入完成后需要退出循环，否则会一直插入到数组里面
        }
    }
    // num[t+1]=new;
}
int main(int argc, char const *argv[])
{
    int i = 11;
    float num[13] = {13.1, 12.3, 11.4, 10.2, 9.3, 8.7, 7.3, 6.5, 5.4, 4.7, 3.3, 2.1};
    insert(num, 8.8);
    for (int i = 0; i <= 12; i++)
    {
        printf("%.2f  ", num[i]);
    }
    return 0;
}
