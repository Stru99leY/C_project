//转换为二进制
/*
将一个不大于256的十进制正整数转化为8位的二进制，不足八位的再前面补0
例如:2-00000010 37-00100101
试求出5、23、189转化后为多少?
*/
#include <stdio.h>
//自己编写

// int main(int argc, char const *argv[])
// {
//     int a[8] = {0};
//     int index = 7, num;
//     printf("请输入要转化的数:");
//     scanf("%d", &num);
//     for (int i = 0; i < 8; i++)
//     {
//         if (num != 0)
//         {
//             a[index] = num % 2;
//             num = num / 2;
//             index--;
//         }
//         if (num == 0)
//         {
//             break;
//         }
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d", a[i]);
//     }
//     return 0;
// }


//参考答案
int main(int argc, char const *argv[])
{
    int a, i, b[8];
    printf("Please input a Number <=256:\n");
    scanf("%d", &a);
    for (i = 1; i <= 8; i++)
        b[i] = 0;
    i = 8;
    while (i >= 1)
    {
        b[i] = a % 2;
        a = a / 2;
        if (a == 0)
            break;
        i--;
    }
    for (int i = 1; i <= 8; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}
