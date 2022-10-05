//获取字符串长度
/*
描述：
键盘输入一个字符串，编写代码获取字符串的长度并输出，要求使用字符指针实现。
输入描述：
键盘输入一个字符串
输出描述：
输出字符串的长度
示例1
输入：
helloworld
输出：
10
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int len = 0;
    char a[100];
    scanf("%[^\n]", a); //%[^\n]除了换行符其他的都读入
    len = strlen(a);
    printf("%d", len);
    return 0;
}
