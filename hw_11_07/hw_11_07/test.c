#define _CRT_SECURE_NO_WARNINGS 1

//复制带随机指针的链表(接口形)
//struct Node* copyRandomList(struct Node* head) {
//    //1.拷贝节点链接在源节点的后面
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* next = cur->next;
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//
//        cur->next = copy;
//        copy->next = next;
//
//        cur = next;
//    }
//    //2.置random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//        cur = cur->next->next;
//    }
//    //3.解下来链接在一起
//    cur = head;
//    struct Node* copyHead = NULL;
//    struct Node* copyTail = NULL;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        cur->next = next;
//        if (copyHead == NULL)
//        {
//            copyHead = copyTail = copy;
//        }
//        else
//        {
//            copyTail->next = copy;
//            copyTail = copyTail->next;
//        }
//        cur = next;
//    }
//    return copyHead;
//}