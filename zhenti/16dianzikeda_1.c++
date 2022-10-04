//输入20个数逆序构建一个单链表
#include <stdio.h>
#include <stdlib.h>
//链表定义
typedef struct lnode
{
    int data;
    struct lnode* next;
}lnode,*linklist;

//采用头插法构建链表
void headinsert(linklist &l){
    lnode *s;
    int num;
    //分配空间
    l=(lnode *)malloc(sizeof(lnode));
    l->next=NULL;
    for (int i = 0; i < 5; i++)
    {   
        scanf("%d",&num);
        s=(lnode *)malloc(sizeof(lnode));
        s->data=num;
        s->next=l->next;
        l->next=s;
    }
}
void disp(linklist l){
    for (int i = 0; i < 5; i++)
    {
        printf("%2d",l->next->data);
        l=l->next;
    }
    
}
int main(int argc, char const *argv[])
{
    lnode *l;
    headinsert(l);
    disp(l);
    return 0;
}
