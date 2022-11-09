#define _CRT_SECURE_NO_WARNINGS 1


//��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
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

//����Ļ��Ľṹ(ʹ�õ������м�����Һͷ�ת����)
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
//    //�ж�fast->next�Ƿ�Ϊ��
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

//�ཻ����(�ӿ�����)
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* curA = headA;
//    struct ListNode* curB = headB;
//    int lenA = 0;
//    int lenB = 0;
//    //��β
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
//    //β��㲻��ȾͲ��ཻ
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
//    //�����߲�ಽ
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


//���������ӿ����ͣ�

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

//�������� II
//˼·���ཻʱ����������ָ�룬�ֱ��ͷ�ߺʹӽ����ߣ��������ĵ㼴Ϊ�뻷��һ����

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