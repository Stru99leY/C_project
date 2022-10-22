//计算最大公约数和最小公倍数
/*
最大公约数: 能同时整除这两个
最小公倍数: 能同时除尽这两个
*/
#include <stdio.h>
#include <stdlib.h>
//最大公约数
int max_gy(int x,int y){
    int gcd;
    for (int i = 1; i <=x&&i<=y; i++)
    {
        if (x%i==0&&y%i==0)
        {
            gcd=i;
        }
        
    }
    return gcd;
}
int max_gy2(int x,int y){
    //用较大的数减去较小的数，直到原先大的数小于等于小的数
    while (x!=y)
    {
        if(x>y)
            x-=y;
        else
            y-=x;
    }
    return x;
}
//采用递归计算
int max_gy3(int x,int y){
    if(y!=0)    return max_gy3(y,x%y);
    else
        return x;  
}
//最小公倍数
int min_gb(int x,int y){
    int mul=(x>y)?x:y;
    while (1)
    {
        if (mul%x==0&&mul%y==0)
        {
            return mul;
            break;
        }
        mul++;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int x,y,gcd,mul;
    scanf("%d %d",&x,&y);
    gcd=max_gy(x,y);
    mul=x*y/max_gy2(x,y);
    printf("最大公约数：%d 最小公倍数：%d",max_gy3(x,y),min_gb(x,y));
    return 0;
}
