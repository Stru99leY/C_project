//我觉得这答案是错的，按这么算11也加进去了，11不是素数吗？？
#include <stdio.h>
#include <math.h>

void main(){
    int i,j,sum=0,s;
    for ( i = 9; i < 499; i+=2)//间隔为2递增，剔除偶数
    {
        s=sqrt((double)i);//开方
        for ( j = 2; j < s; ++j)
        {
            if(i%j==0)//不是素数
            break;
        }
        if(j==s){//什么意思？？
            sum+=i;
            printf("%4d",i);
        }
    }
    printf("9到499之间所有非偶数非素数的数之和为:%d",sum);
}