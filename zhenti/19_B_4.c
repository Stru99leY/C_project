//从键盘输入10个整数存入一数组中，然后将该数组中的各元素按逆序存放后显示出来
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], t, temp, j;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    //bubble sort
    for (int i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%-2d", a[i]);
    }

    return 0;
}
