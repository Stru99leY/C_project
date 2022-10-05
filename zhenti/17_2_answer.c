//答案是借助第三个文件c.txt将a,b中的文件按要求放到c中再将c的文件覆盖a
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fq, *fr;
    char ch;
    if ((fp = fopen("a.txt", "rb+")) == NULL)
    { //读/写打开文件
        printf("cannot open this file!");
        exit(0);
    }
    if ((fq = fopen("a.txt", "rb+")) == NULL)
    { //只读打开二进制文件
        printf("cannot open this file!");
        exit(0);
    }
    fr = fopen("c.txt", "wb+"); //读/写建立一个新的二进制文件
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, fr);               //从a取字符存入c
        if ((ch = fgetc(fq)) != EOF) //同时从b取字符存入c
        {
            fputc(ch, fr);
        }
    }
    while ((ch = fgetc(fq)) != EOF) // b比a长
    {
        fputc(ch, fr);
    }
    rewind(fp); //将文件指针重新返回开头
    rewind(fr);
    while (!feof(fr)) //将c的字符复制给a
    {
        ch = fgetc(fr);
        fputc(ch, fp);
    }
    fclose(fp);
    fclose(fq);
    fclose(fr);
    return 0;
}