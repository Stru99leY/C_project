#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
rand函数在产生随机数前，需要系统提供的生成伪随机数序列的种子，rand根据这个种子的值产生一系列随机数。
如果系统提供的种子没有变化，每次调用rand函数生成的伪随机数序列都是一样的。srand(unsigned seed)通过参数seed
改变系统提供的种子值，从而可以使得每次调用rand函数生成的伪随机数序列不同，从而实现真正意义上的“随机”。
通常可以利用系统时间来改变系统的种子值，即srand(time(NULL))，可以为rand函数提供不同的种子值，
进而产生不同的随机数序列。
srand()函数就是用来设置rand()函数的种子的
*/
void insert(float num[13], float newnum);
int main(int argc, char const *argv[])
{
    float nums[12];
    srand((unsigned)time(NULL)); //产生rand函数的种子
    int i, j;
    for (i = 0; i < 12; i++)
    {
        nums[i] = rand() % 50; //产生随机数
    }
    float temp;
    for (i = 1; i < 12; i++)     // 1-11循环11次，内层for循环排序
        for (j = 0; j < 11; j++) //从第一个数开始与后一位进行比较，每次循环将小的移到最后
            if (nums[j] < nums[j + 1])
            {
                //交换
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }

    for (i = 0; i < 12; i++)
        printf("%.2f  ", nums[i]);
    float n;
    printf("\n请输入一个数:\n");
    scanf("%f", &n);
    insert(nums, n);
    return 0;
}
void insert(float num[13], float newnum)
{
    num[12] = newnum;
    int i, j;
    float temp;
    for (i = 1; i < 13; i++)
        for (j = 0; j < 12; j++)
            if (num[j] < num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
    for (i = 0; i < 13; i++)
        printf("%.2f  ", num[i]);
}