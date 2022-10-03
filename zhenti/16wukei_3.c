//设计函数计算通话费用
/*计算通话的费用
0.08/min,max time < 24H,min time =1s,设计函数 double count(char *s,char *t)
s表示通话开始时间，t表示通话结束时间，时间格式HH:MM:SS
例如:
    count("14:05:23","14:05:30")的返回值为0.08
    count("23:01:12","00:12:15")的返回值为5.76
*/
//这里应该知道一种字符转数字的方法:字符-'0',方便计算
//这里把char -> int 难倒了我，后面计算也是采用的最蠢的计算
#include <stdio.h>
/*
double count(char *s, char *t)
{
    //转化为int来计算
    int h1 =( s[0] - '0')*10+s[1]-'0', m1 = (s[3] - '0')*10+s[4]-'0', s1 = (s[6] - '0')*10+s[7]-'0';
    int h2 =( t[0] - '0')*10+t[1]-'0', m2 = (t[3] - '0')*10+t[4]-'0', s2 = (t[6] - '0')*10+t[7]-'0';
   // int h2 = t[0] - '0', m2 = t[2] - '0', s2 = t[4] - '0';
    if (h1 == h2 && m1 == m2 && s2 > s1)
    {
        return 0.08;
    }
    if (h1 == h2 && m2 > m1)
    {
        int p;
        p = (int)(m2 * 60 + s2 - (m1 * 60 + s1)); //化成秒来计算
        if (p % 60 != 0)
        {
            return (p / 60 * 0.08 + 0.08);
        }
        return p / 60 * 0.08;
    }
    else
    {
        if (h2 < h1)
        {
            int temp;
            temp = ((h2 * 60 + m2 * 60 + s2) + (86400 - (h1 * 60*60+ m1 * 60 + s1)));//一天86400s
            if (temp % 60 != 0)
            {
                return (temp / 60 * 0.08 + 0.08);
            }
            return (temp / 60 * 0.08);
        }
        else
        {
            int tmp;
            tmp = (h2 * 60 + s2 * 60 + s2) - (h1 * 60 + m1 * 60 + s1);
            if (tmp % 60 != 0)
            {
                return tmp % 60 * 0.08 + 0.08;
            }
            else
                return tmp % 60 * 0.08;
        }
    }
}
*/
//答案
double count(char s[],char t[]){
    int h1 =( s[0] - '0')*10+s[1]-'0', m1 = (s[3] - '0')*10+s[4]-'0', s1 = (s[6] - '0')*10+s[7]-'0';
    int h2 =( t[0] - '0')*10+t[1]-'0', m2 = (t[3] - '0')*10+t[4]-'0', s2 = (t[6] - '0')*10+t[7]-'0';
    int t_start=h1*60*60+m1*60+s1;
    int t_end = h2*60*60+m2*60+s2;
    int interval,p;
    //结束时间小于开始时间的话说明超过0点到新的一天了，用一天的时间-开始的时间+结束的时间就等于时间间隔
    if (t_end<=t_start)
    {
        interval=24*3600-t_start+t_end;//时间间隔
    }else{
        interval=t_end=t_start;
    }
    p=interval/60;//化成分钟
    if (interval%60)
    {
        p++;//不是整分钟数，+1,多0.08元
    }
    return p*0.08;
    
}
int main(int argc, char const *argv[])
{
    char a[]="23:01:12";
    char b[]="00:12:15";
    printf("%.2f",count(a,b));
    return 0;
}
