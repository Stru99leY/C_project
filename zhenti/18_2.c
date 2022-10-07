//杨辉三角<10行>
#include <stdio.h>
#define N 11
int main(int argc, char const *argv[])
{
    int i,j,a[N][N]={0};
    //最左边和最右边的都为1，先处理
    for (int i = 0; i < N; i++)
    {
        a[i][i]=1;
        a[i][N]=1;
    }
    //从第三行开始，注意下标关系
    for (int i = 2; i < N; i++)
    {
        for (int j = 1 ; j < i; j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];//从第二个开始每个元素值等于上一行两个元素之和
        }
        
    }
    //输出
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%-5d",a[i][j]);//靠左对齐输出
        }
        putchar('\n');//每输出完一行换行
        
    }
    
    return 0;
}
