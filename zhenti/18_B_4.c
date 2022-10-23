//输入一个字符串将其中的小写字母转换为大写，然后输出到test文本文件中保存
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i;char str[80];
    FILE *fp;
    if ((fp=fopen("test.txt","w"))==NULL)
    {
        printf("Can not open file\n");
        exit(0);
    }
    printf("Input a string(end with !):");
    gets(str);
    i=0;
    while (str[i]!='!')
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        fputc(str[i],fp);
        i++;
    }
    fclose (fp);
    fp=fopen64("test.txt","r");
    fgets(str,strlen(str)+1,fp);//从fp流中读取strlen(str)+1个数据到str中，后面的'\0'也算所以+1
    printf("%s",str);
    fclose(fp);
    return 0;
}
