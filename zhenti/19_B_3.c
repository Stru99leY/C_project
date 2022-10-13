//有一个14*14方阵A(i,j),其每个元素的值为该元素下标的立方和
//求出该矩阵所有元素的累加和(注:i,j从1到14)
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[15][15], sum = 0;
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            A[i][j] = i * i * i + j * j * j;//每个元素的值为该元素下标的立方和
        }
    }
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            sum += A[i][j];
            printf("%-6d", A[i][j]);//题目并未要求输出这个矩阵，我输出只是为了更好的理解
        }
        putchar('\n');
    }
    printf("所有元素之和为:%d", sum);

    return 0;
}
