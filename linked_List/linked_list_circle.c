#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int i;
    struct LinkList  *next;
};

extern struct LinkList *SearchList(struct LinkList *L,int n);
extern void TraverseList(struct LinkList *L);

int  IsLoopList(struct LinkList *L)        //�ж������Ƿ�ɻ�
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
    printf("�Ƿ�ʹ������ɻ�����Y/N����");
    scanf("%c",&c);
    if(c=='Y')
    {
        printf("ԭ���� ");
        TraverseList(L);
        printf("��ѡ�񻷵�ͷ�ڵ㣨������������");
        scanf("%d",&n);
        q=SearchList(L,n);
        while(p->next!=NULL)        p=p->next;
        p->next=q;
    }
    getchar();
    printf("�Ƿ��жϸ�����ʹ�ɻ��ģ���Y/N����");
    scanf("%c",&c);
    if(c=='Y')
    {
        int jg=IsLoopList(L);
        if(jg==1)   printf("�ɻ���");
        else        printf("���ɻ���");
    }
}
