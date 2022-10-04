//用结构体完成一些函数的设计
/*
收支日期date,项目简记outline,金额amount
结构体定义如下
typedef struct 
{
    long date;
    char outline[20];
    float amount;
}ACCOUNT;
录入n笔收支信息到数组s中
void input(ACCOUNT *s,int n)
按照收支顺序排序
void sort(ACCOUNT *s,int n)
显示s中存放的n笔收支信息
void show(ACCOUNT *s,int n)
*/
#include <stdio.h>
typedef struct 
{
    long date;
    char outline[20];
    float amount;
}ACCOUNT;
//录入
void input(ACCOUNT *s,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%ld%s%lf",s[i].date,s[i].outline,s[i].amount);
    }
}
//排序
//看的答案，冒泡排序不熟悉，不会写:(
void sort(ACCOUNT *s,int n)
{
    ACCOUNT t;
    //冒泡排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (s[j].date>s[j+1].date ||(s[j].date==s[j+1].date&&s[j].amount<s[j+1].amount))//排序条件
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
            
        }
        
        
    }
    

}
//显示
void show(ACCOUNT *s,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%ld,%s,%f",s[i].date,s[i].outline,s[i].amount);
    }
    

}