#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int i;
    struct LinkList  *next;
};


void InsertList(struct LinkList *q,struct LinkList *p)   //在q后面插入p          ok
{
    p->next=q->next;
    q->next=p;
}


extern void TraverseList(struct LinkList *L);
extern struct LinkList *SearchList(struct LinkList *L,int n);

void insert_List(struct LinkList *L)
{
    struct LinkList *p,*q;
    p=(struct LinkList *)malloc(sizeof(struct LinkList));
    printf("请为将要插入的链表赋值（整数）:");
    scanf("%d",&p->i);
    TraverseList(L);
    printf("请选择要插入的节点（输入整数）：");
    int i;
    scanf("%d",&i);
    q=SearchList(L,i);
    InsertList(q,p);
    printf("插入新节点后的链表：");
    TraverseList(L);
}
