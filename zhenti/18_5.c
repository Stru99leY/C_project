//求1+2+...+50
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum=0;
    for (int i = 1; i <= 50; i++)
    {
        sum+=i;
    }
    printf("1+2+3+...+50=%d",sum);
    
    return 0;
}
