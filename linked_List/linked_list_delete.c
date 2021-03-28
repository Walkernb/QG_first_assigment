#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int i;
    struct LinkList  *next;
};

extern void TraverseList(struct LinkList *L);
extern struct LinkList *SearchList(struct LinkList *L,int n);

struct LinkList *DeleteList(struct LinkList *L,struct LinkList *e)  //删除e节点
{
    struct LinkList *p,*h=L;
    if(L==e)    {p=L->next;   free(L);   return p;}
    else        p=L->next;
    while(L!=NULL)
    {
        if(p==e)    {L->next=p->next;  free(p); break; }
        L=p;
        p=L->next;
    }
    return h;
}

void delete_list(struct LinkList *L)
{
        printf("原来的链表：");
        TraverseList(L);
        printf("请入要删除节点的数据（整数）：");
        int i;
        scanf("%d",&i);
        struct LinkList *p=SearchList(L,i);
        L=DeleteList(L,p);
        printf("删除节点后的链表：");
        TraverseList(L);
}
