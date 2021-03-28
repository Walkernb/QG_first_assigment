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

void DeleteList_DuL(struct duLinkedList *p,struct duLinkedList *L)  //删除p后面的节点
{
    struct duLinkedList *h=p->next;
    if(p->next==NULL)   {printf("该节点是尾节点，后面无节点！\n");    return ;}
    p->next=h->next;
    free(h);
    printf("删除后的新链表：");
    TraverseList_DuL(L);
}

void  delete_Dulist(struct duLinkedList *L)
{
    struct duLinkedList *p;
    printf("原链表：");
    TraverseList_DuL(L);
    printf("\n请选择要删除的前一个节点（输入节点的数据）：     ");
    int n;
    scanf("%d",&n);
    p=Search_list(L,n);
    DeleteList_DuL(p,L);
}
