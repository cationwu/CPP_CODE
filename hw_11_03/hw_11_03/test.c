#define _CRT_SECURE_NO_WARNINGS 1


//给定一个头结点为 head 的非空单链表，返回链表的中间结点。如果有两个中间结点，则返回第二个中间结点。
//#include <stdio.h>
//
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
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
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//	  //判断fast->next是否为空
//    if (fast->next == NULL)
//    {
//        return head;
//    }
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//int main()
//{
//    struct ListNode* head = CreateSList(5);
//    struct ListNode* ret = middleNode(head);
//    SLTPrint(ret);
//    return 0;
//}

//输入一个链表，输出该链表中倒数第k个结点。

#include <stdio.h>

//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
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
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//    //fast先走k步
//    while (k--)
//    {
//        //链表没有k步长，则返回NULL
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//int main()
//{
//    struct ListNode* head = CreateSList(5);
//    struct ListNode* ret = FindKthToTail(head,2);
//    SLTPrint(ret);
//    return 0;
//}

//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
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

//法1：无哨兵位头节点
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//
//    //取小的尾插
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            if (tail == NULL)
//            {
//                head = tail = list1;
//            }
//            else
//            {
//                tail->next = list1;
//                tail = tail->next;
//            }
//            list1 = list1->next;
//        }
//        else
//        {
//            if (tail == NULL)
//            {
//                head = tail = list2;
//            }
//            else
//            {
//                tail->next = list2;
//                tail = tail->next;
//            }
//            list2 = list2->next;
//        }
//    }
//    if (list1)
//    {
//        tail->next = list1;
//    }
//    if (list2)
//    {
//        tail->next = list2;
//    }
//    return head;
//}

//法2：带哨兵位头节点

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* guard, * tail;
    guard = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    guard->next = NULL;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            tail = tail->next;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = tail->next;
            list2 = list2->next;
        }
    }
    if (list1)
    {
        tail->next = list1;
    }
    if (list2)
    {
        tail->next = list2;
    }
    struct ListNode* head = guard->next;
    free(guard);

    return head;
}

int main()
{
    struct ListNode* head1 = CreateSList(5);
    struct ListNode* head2 = CreateSList(3);
    struct ListNode* ret = mergeTwoLists(head1, head2);
    SLTPrint(ret);
    return 0;
}

