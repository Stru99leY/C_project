//求一正整数等差数列的前五项的立方和，该数列前四项之和是26，之积为880
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, d;
    long int sum;
    for (i = 0; i < 26; i++)
    {
        for (d = 0; d < 26; d++)
        {
            if ((i + (i + d) + (i + 2 * d) + (i + 3 * d)) == 26 && (i * (i + d) * (i + 2 * d) * (i + 3 * d)) == 880)
            {

                // printf("%d %d",i,d);
                break;
            }
        }
    }
    sum = i * i * i + (i * d) * (i + d) * (i + d) + (i * 2 * d) * (i + 2 * d) * (i + 2 * d) + (i * 3 * d) * (i + 3 * d) * (i + 3 * d);
    printf("%ld", sum);
    return 0;
}
