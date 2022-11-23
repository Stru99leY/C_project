//数字加密过程
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, g, s, b, q;
    scanf("%d", &num);
    g = (num % 10 + 5) % 10;       // four
    s = (num / 10 % 10 + 5) % 10;  // thr
    b = (num / 100 % 10 + 5) % 10; // sec
    q = (num / 1000 + 5) % 10;     // first
    // 1 4互换 2 3互换
    num = g * 1000 + s * 100 + b * 10 + q;
    printf("%d", num);
    return 0;
}
//答案
// int main(int argc, char const *argv[])
// {
//     int num;
//     int a[4];
//     scanf("%d",&num);
//     a[0]=num/1000;
//     a[1]=num/100%10;
//     a[2]=num/10%10;
//     a[3]=num%10;
//     for (int i = 0; i < 4; i++)
//     {
//         a[i]+=5;
//         a[i]%=10;
//     }
//     for (int i = 0; i <= 3/2; i++)
//     {
//         int tmp=a[i];
//         a[i]=a[3-i];
//         a[3-i]=tmp;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d",a[i]);
//     }

//     return 0;
// }
