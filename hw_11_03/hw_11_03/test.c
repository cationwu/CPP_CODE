#define _CRT_SECURE_NO_WARNINGS 1


//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣����������м��㣬�򷵻صڶ����м��㡣
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
//	  //�ж�fast->next�Ƿ�Ϊ��
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

//����һ����������������е�����k����㡣

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
//    //fast����k��
//    while (k--)
//    {
//        //����û��k�������򷵻�NULL
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

//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
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

//��1�����ڱ�λͷ�ڵ�
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
//    //ȡС��β��
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

//��2�����ڱ�λͷ�ڵ�

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

