#include <stdio.h>
int fun(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += (2 * i - 1);
    }
    return s;
}
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fun(i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int index = 1;
    while (sum(index) < 4)
    {
        index++;
    }
    printf("%d", index-1);
    return 0;
}
