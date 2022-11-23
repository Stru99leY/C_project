//找1-99的同构数
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <=99; i++)      {
        if (i*i%10==i || i*i%100==i)
        {
            printf("%4d",i);
        }
        
    }
    
    return 0;
}
