#define _CRT_SECURE_NO_WARNINGS 1


//编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
//#include <stdio.h>
//
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
//struct ListNode* partition(struct ListNode* pHead, int x) 
//{
//    struct ListNode* lessHead, * lessTail, * greaterHead, * greaterTail;
//    lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    greaterHead = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    lessHead->next = greaterHead->next = NULL;
//
//    struct ListNode* cur = pHead;
//    while (cur)
//    {
//        if ((cur->val) < x)
//        {
//            lessTail->next = cur;
//            lessTail = lessTail->next;
//        }
//        else
//        {
//            greaterTail->next = cur;
//            greaterTail = greaterTail->next;
//        }
//        cur = cur->next;
//    }
//    greaterTail->next = NULL;
//    lessTail->next = greaterHead->next;
//    pHead = lessHead->next;
//    free(lessHead);
//    free(greaterHead);
//    return pHead;
//}
//
//int main()
//{
//    struct ListNode* head = CreateSList(5);
//    struct ListNode* ret = partition(head, 3);
//    SLTPrint(ret);
//    return 0;
//}

//链表的回文结构(使用到链表中间结点查找和反转链表)
//#include <stdio.h>
//#include <stdbool.h>
//
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
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    //判断fast->next是否为空
//    if (fast->next == NULL) {
//        return head;
//    }
//    while (fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = head->next;
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//        {
//            n3 = n3->next;
//        }
//    }
//    return n1;
//}
//
//bool chkPalindrome(struct ListNode* A) {
//    struct ListNode* mid = middleNode(A);
//    struct ListNode* rhead = reverseList(mid);
//    while (A && rhead)
//    {
//        if (A->val != rhead->val)
//        {
//            return false;
//        }
//        A = A->next;
//        rhead = rhead->next;
//    }
//    return true;
//}
//
//int main()
//{
//    struct ListNode* head = CreateSList(5);
//    bool ret = chkPalindrome(head);
//    if (ret)
//    {
//        printf("true\n");
//    }
//    else
//    {
//        printf("false\n");
//    }
//    return 0;
//}

//相交链表(接口类型)
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* curA = headA;
//    struct ListNode* curB = headB;
//    int lenA = 0;
//    int lenB = 0;
//    //找尾
//    while (curA->next)
//    {
//        lenA++;
//        curA = curA->next;
//    }
//    while (curB->next)
//    {
//        lenB++;
//        curB = curB->next;
//    }
//    //尾结点不相等就不相交
//    if (curA != curB)
//    {
//        return NULL;
//    }
//    int gap = abs(lenA - lenB);
//    struct ListNode* longList = headA;
//    struct ListNode* shortList = headB;
//    if (lenB > lenA)
//    {
//        longList = headB;
//        shortList = headA;
//    }
//    //长先走差距步
//    while (gap)
//    {
//        longList = longList->next;
//        gap--;
//    }
//    while (longList != shortList)
//    {
//        longList = longList->next;
//        shortList = shortList->next;
//    }
//    return longList;
//}


//环形链表（接口类型）

//bool hasCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            return true;
//        }
//    }
//    return false;
//}

//环形链表 II
//思路：相交时，设置两个指针，分别从头走和从交点走，其相遇的点即为入环第一个点

//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            struct ListNode* meet = fast;
//            while (head != meet)
//            {
//                head = head->next;
//                meet = meet->next;
//            }
//            return head;
//        }
//    }
//    return NULL;
//}