//有N个人围成一圈，顺序排号，从第一个人开始报数(从1到3报数)，凡报到3的人退出圈子，问最后留下的是原来第几号那位.
/*
可能是我的理解有误，我发现不管多少人围成一个圈，最后剩下的绝对是2号
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10
typedef struct Lnode
{
    int data;
    struct Lnode *next;
} Lnode, *lnode;
int ren;
//尾插法建立链表<带头结点>
void buildLonde(lnode &head)
{
    head = (Lnode *)malloc(sizeof(Lnode));
    Lnode *r = head, *s;
    for (int i = 1; i <= ren; i++)
    {
        s = (Lnode *)malloc(sizeof(Lnode));
        s->data = i; //给新节点赋值
        r->next = s; //头节点指向新节点
        r = r->next; //头节点后移
    }
    r->next = head->next; //最后一个节点指向头节点，形成闭环
}
//输出
void disp(lnode L)
{
    Lnode *s = L->next;
    int t = 0;
    do
    {
        printf("%  d", s->data);
        s = s->next;
        t++;
    } while (t < ren);

    printf("\n");
}
int main(int argc, char const *argv[])
{
    int cnt=0; //计数
    printf("请输入总的人数：");
    scanf("%d", &ren);
    Lnode *L;
    buildLonde(L);
    disp(L);
    Lnode *p=L->next,*q;
    for (int i = 0; i < ren; i++)
    {
        p=p->next;
        cnt++;
        if (cnt%3==0)
        {
            p=p->next->next;//数到三提出那个人
        }
        if (p->next==p->next)//当只剩一个人时
        {
            q=p;
            break;
        }
        
    }
    printf("最后剩的那个人的编号是%d",p->data);
    return 0;
}
