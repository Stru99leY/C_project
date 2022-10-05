//编写函数使用指针交换两数字的值
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = 0; //临时变量用于交换
    t = *a;
    *a = *b;
    *b = t;
}
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b); //传入地址
    printf("%d %d", a, b);
    return 0;
}
