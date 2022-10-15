#include <stdio.h>
int cube(int a)
{
    int i, j, sum = 0;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            sum += i * i * i + j * j * j;
        }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    printf("%d\n", cube(14));
    return 0;
}
