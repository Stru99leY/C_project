//交叉合并字符串<文件操作>
/*
我这个方法是最蠢的方法>.<
*/
#include <stdio.h>
#include <stdlib.h>
#define Max 100
int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;
    int cnt = 0, cnt1 = 0, ch; //记录文件中字符的个数
    char a[Max], b[Max], c[Max];
    if ((fp1 = fopen("a.txt", "r")) == NULL || ((fp2 = fopen("b.txt", "r")) == NULL))
    {
        printf("文件打开失败\n");
    }
    //记录a.txt中字符的个数
    while ((ch = fgetc(fp1)) != EOF)
    {
        cnt++;
    }
    rewind(fp1); //重置文件指针
    // feof用于检测文件末尾指示器是否被设置
    while (!feof(fp1))
    {
        fgets(a, Max, fp1); //将a.txt中的字符存放到数组a中
    }
    fclose(fp1);
    //记录b.txt中字符的个数
    while ((ch = fgetc(fp2)) != EOF)
    {
        cnt1++;
    }
    rewind(fp2);
    while (!feof(fp2))
    {
        fgets(b, Max, fp2);
    }
    fclose(fp2);
    //将两个数组合成一个新的数组
    int i = 0, j = 0, k = 0;
    while (i < cnt || j < cnt1)
    {
        if (a[i] == 'a')
        {
            c[k++] = a[i++];
        }
        if (b[i] == 'b')
        {
            c[k++] = b[j++];
        }
    }
    //将新数组的内容写入a.txt
    fp1 = fopen("a.txt", "w");
    for (int i = 0; i < (cnt + cnt1); i++)
    {
        fputc(c[i], fp1);
    }
    fclose(fp1);
    return 0;
}
