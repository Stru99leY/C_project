//求100~600之间同时满足除3余2，除5余3条件的数的个数
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cnt = 0; //计数
    for (int i = 100; i <= 600; i++)
    {
        if ((i % 3 == 2) && (i % 5 == 3))
        {
            printf("%4d", i);
            cnt++;
        }
    }
    putchar('\n');
    printf("满足条件的个数为:%d", cnt);

    return 0;
}
