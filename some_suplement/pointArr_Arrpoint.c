/*
数组指针:是一个指向数组的指针
指针数组:是一个储存指针的数组
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int (*p)[3];
    /*
    定义了一个数组指针，指向一个数组长度为3的一维数组，赋值给他的地址要是数组类型的地址
    一维数组名就是一个指针这里只是用指针的形式代替了数组名
    */
   int a[3]={1,2,3};
   p=&a;
   /*
   将数组a的地址赋值给p，此时(*p)[i]相当于a[i]
   因为指针p是指向一个数组,p=a表示p指向首个元素的地址，虽然&a,&a[0],a的结果是一样的
   (这是因为数组一般用其首元素地址表示)
   */
    printf("一维数组的遍历:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",(*p)[i]);
    }
    printf("--------------------------\n");
    printf("&a=%d\n",&a);//输出a的地址
    printf("p=%d\n",p);//p指向了数组a，所以输出为a的地址
    printf("*p=%d\n",*p);//*p为数组a本身
    printf("p+1=%d\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));//*(p+1) == p[1],刚好超过a长度的那个地址，p+1表示p要增加3*4个字节长度    
    printf("**p=%d\n",**p);//p指向a，**p表示*a，表示数组首元素
    printf("p[0]=%d\n",p[0]);//p[0]==*p,输出a首元素的地址
    printf("*p[0]=%d\n",*p[0]);//a首元素的值

    const char *str[5]={"I","am","a","boy"};//定义一个长度为5的指针数组
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",str[i]);//stt[i]表示字符串的地址
    }
    
    return 0;
}
