//转换大小写
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i = 0, t = 0;
    char s[100];
    FILE *fp;
    if ((fp = fopen("test.txt", "w")) == NULL)
    {
        printf("can not open this file");
        exit(0);
    }

    printf("input string:\n");
    gets(s); //使用gets读取键盘字符，比scanf好，因为scanf不能读取空格

    // do
    // {
    //     scanf("%c",s[t++]);
    // } while (s[t]!='i');
    while (s[i] != '!')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        fputc(s[i], fp);
        i++;
    }
    fclose(fp);
    fp = fopen("test.txt", "r");
    fgets(s, strlen(s) + 1, fp); //从文件中读取刚刚储存的数据
    printf("%s", s);
    return 0;
}
