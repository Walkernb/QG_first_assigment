#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int i;
    struct LinkList  *next;
};


void InsertList(struct LinkList *q,struct LinkList *p)   //��q�������p          ok
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
    printf("��Ϊ��Ҫ���������ֵ��������:");
    scanf("%d",&p->i);
    TraverseList(L);
    printf("��ѡ��Ҫ����Ľڵ㣨������������");
    int i;
    scanf("%d",&i);
    q=SearchList(L,i);
    InsertList(q,p);
    printf("�����½ڵ�������");
    TraverseList(L);
}
