//求5K以内偶数和
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 0; i <= 5000; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
