#include<stdio.h>
#include<stdlib.h>
struct duLinkedList
{
    int i;
    struct duLinkedList *front;
    struct duLinkedList *next;
};

extern  void TraverseList_DuL(struct duLinkedList *L);
extern  struct duLinkedList *Search_list(struct duLinkedList *L, int n);

void DeleteList_DuL(struct duLinkedList *p,struct duLinkedList *L)  //ɾ��p����Ľڵ�
{
    struct duLinkedList *h=p->next;
    if(p->next==NULL)   {printf("�ýڵ���β�ڵ㣬�����޽ڵ㣡\n");    return ;}
    p->next=h->next;
    free(h);
    printf("ɾ�����������");
    TraverseList_DuL(L);
}

void  delete_Dulist(struct duLinkedList *L)
{
    struct duLinkedList *p;
    printf("ԭ����");
    TraverseList_DuL(L);
    printf("\n��ѡ��Ҫɾ����ǰһ���ڵ㣨����ڵ�����ݣ���     ");
    int n;
    scanf("%d",&n);
    p=Search_list(L,n);
    DeleteList_DuL(p,L);
}
