/*
水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。
*/
#include <stdio.h>

int main()

{

    printf("输出1K以内水仙花数：\n");

    int i = 100;

    for (; i < 1000; i++)
    {

        int num_0 = i % 10;

        int num_1 = i / 10 % 10;

        int num_2 = i / 10 / 10 % 10;

        if (i == (num_0 * num_0 * num_0 + num_1 * num_1 * num_1 + num_2 * num_2 * num_2))

            printf("%d\t", i);
    }

    return 0;
}