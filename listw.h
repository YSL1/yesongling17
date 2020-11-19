fndef listw_h
#define listw_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
} LinkList;

//创建链表
LinkList* CreateList();
//求链表的元素个数
int Sizeof(LinkList *l);
//在链表的l第k个位置插入元素x
void Insert(LinkList *l, int k, dataType x);
//删除链表l的第k个元素
void Delete(LinkList *l, int k);
//判断链表是否为空
int Empty(LinkList *l);
//求链表l的第k个元素的值
dataType GetData(LinkList *l, int k);
//在链表l中查找h值为x的元素
struct node* Find(LinkList *l, dataType x);
//输出链表
void Print(LinkList *l);
//清空链表
void ClearLinkList(LinkList *l);

#endif
