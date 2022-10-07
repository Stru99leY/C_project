//设有三个候选人，每次输入一个得票的候选人的名字，要求最后输出各人的票结果
#include <stdio.h>
struct person
{
    char name[20];
    int count;
}leader[3]={"Li",0,"Zhang",0,"Wang",0};
int main(int argc, char const *argv[])
{
    int i,j;
    char leader_name[20];
    for ( i = 0; i <=10; i++)
    {
        printf("请输入要投给候选人的名字：");
        gets(leader_name);
        if (leader_name[0]=='L')
        {
            leader[0].count++;
        }
        if (leader_name[0]=='Z')
        {
            leader[1].count++;
        }else if(leader_name[0]=='W')
        {
            leader[2].count++;
        }
        else printf("您输入的候选人名字有误,请重新输入!\n");
        
        
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%5s:%d\n",leader[i].name,leader[i].count);
    }
    
    
    return 0;
}

