//逆置字符串
#include <stdio.h>
//答案<递归>
void Reverse(char *s, int len)
{
    char t;
    if (len < 2)
    {
        return;
    }
    t = *s;              //将首元素赋值给t
    *s = *(s + len - 1); //将末尾元素赋值给首元素
    *(s + len - 1) = t;  //将首元素赋值给末尾元素
    //注意递归调用len的大小，因为s向前+1,所以递归调用的时候len-2，否则逆置会不成功
    Reverse(s + 1, len - 1); //递归逆置
}
//自己写的
/*
void Reverse(char *s,int len){
    char *p,res[len];
    p=s+6;//p指向字符串最后一个元素
    for (int i = 0; i < len; i++)
    {
        res[i]=*p--;//将字符串最后一元素赋值给一个新的数组，完完成逆置
    }
    printf("%s",res);

}
*/
int main(int argc, char const *argv[])
{
    char a[] = {"abcdefg"};
    Reverse(a, 7);
    printf("%s", a);
    return 0;
}
