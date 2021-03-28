#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int i;
    struct LinkList  *next;
};

extern struct LinkList *SearchList(struct LinkList *L,int n);
extern void TraverseList(struct LinkList *L);

int  IsLoopList(struct LinkList *L)        //判断链表是否成环
{
    int     jg=0;
    struct LinkList *p=L->next;
    p=p->next;
    while(p!=NULL)
    {
        if(p==L)    {jg=1;  return jg;}
        p=p->next;
        if(p==NULL)     break;
        p=p->next;
        L=L->next;
    }
    return jg;
}

void  circle_List(struct LinkList *L)
{
    L=L->next;
    struct LinkList *p=L,*q;
    char c;
    int n;
     getchar();
    printf("是否使该链表成环？（Y/N）：");
    scanf("%c",&c);
    if(c=='Y')
    {
        printf("原链表： ");
        TraverseList(L);
        printf("请选择环的头节点（输入整数）：");
        scanf("%d",&n);
        q=SearchList(L,n);
        while(p->next!=NULL)        p=p->next;
        p->next=q;
    }
    getchar();
    printf("是否判断该链表使成环的？（Y/N）：");
    scanf("%c",&c);
    if(c=='Y')
    {
        int jg=IsLoopList(L);
        if(jg==1)   printf("成环！");
        else        printf("不成环！");
    }
}
