//gets() 函数的功能是从输入缓冲区中读取一个字符串存储到字符指针变量 str 所指向的内存空间
//与scanf不同的是可以读取空格
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // char str[21]={'\0'};
    // printf("input a string:\n");
    // gets(str);
    // printf("%s",str);
/**说明
 * @brief 
 * 关于使用 gets() 函数需要注意：使用 gets() 时，
 * 系统会将最后“敲”的换行符从缓冲区中取出来，然后丢弃，所以缓冲区中不会遗留换行符。
 * 这就意味着，如果前面使用过 gets()，而后面又要从键盘给字符变量赋值的话就不需要吸收回车清空缓冲区了，
 * 因为缓冲区的回车已经被 gets() 取出来扔掉了。
 */
    char str[30];
    char ch;
    printf("请输入字符串：");
    gets(str);
    printf("%s\n", str);
    scanf("%c", &ch);
    printf("ch = %c\n", ch);
    return 0;
//如果使用的是scanf的话需要用getchar()吸收缓冲区遗留的字符
}