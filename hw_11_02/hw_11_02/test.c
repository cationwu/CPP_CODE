#define _CRT_SECURE_NO_WARNINGS 1


//删除链表中等于给定值 val 的所有节点
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
//
//
//struct ListNode* BuySLTNode(int x)
//{
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (newnode == NULL)
//    {
//        perror("malloc fail");
//        exit(-1);
//    }
//
//    newnode->val = x;
//    newnode->next = NULL;
//
//    return newnode;
//}
//
//struct ListNode* CreateSList(int n)
//{
//    struct ListNode* phead = NULL, * ptail = NULL;
//    int x = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d", &x);
//        struct ListNode* newnode = BuySLTNode(x);
//        if (phead == NULL)
//        {
//            ptail = phead = newnode;
//        }
//        else
//        {
//            ptail->next = newnode;
//            ptail = newnode;
//        }
//    }
//    return phead;
//}
//
//void SLTPrint(struct ListNode* phead)
//{
//    struct ListNode* cur = phead;
//    while (cur != NULL)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}
//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct ListNode* ptr = head;
//    struct ListNode* tmp = head;
//    while (head->next)
//    {
//
//        if ((head->next)->val == val)
//        {
//            tmp = head->next->next;
//            free(head->next);
//            head->next = tmp;
//        }
//        else
//        {
//            head = head->next;
//        }
//    }
//    if (ptr->val == val)
//    {
//        ptr = ptr->next;
//    }
//    return ptr;
//}
//
//int main()
//{
//    struct ListNode* head = CreateSList(7);
//    struct ListNode* ret = removeElements(head,6);
//    SLTPrint(ret);
//    return 0;
//}


//反转链表

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* BuySLTNode(int x)
{
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
        exit(-1);
    }

    newnode->val = x;
    newnode->next = NULL;

    return newnode;
}

struct ListNode* CreateSList(int n)
{
    struct ListNode* phead = NULL, * ptail = NULL;
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        struct ListNode* newnode = BuySLTNode(x);
        if (phead == NULL)
        {
            ptail = phead = newnode;
        }
        else
        {
            ptail->next = newnode;
            ptail = newnode;
        }
    }
    return phead;
}

void SLTPrint(struct ListNode* phead)
{
    struct ListNode* cur = phead;
    while (cur != NULL)
    {
        printf("%d->", cur->val);
        cur = cur->next;
    }
    printf("NULL\n");
}

struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode* cur = head;
    struct ListNode* rhead = NULL;
    while (cur)
    {
        struct ListNode* tmp = cur->next;
        cur->next = rhead;
        rhead = cur;
        cur = tmp;
    }
    return rhead;
}

int main()
{
    struct ListNode* head = CreateSList(5);
    struct ListNode* ret = reverseList(head);
    SLTPrint(ret);
    return 0;
}