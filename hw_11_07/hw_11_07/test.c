#define _CRT_SECURE_NO_WARNINGS 1

//���ƴ����ָ�������(�ӿ���)
//struct Node* copyRandomList(struct Node* head) {
//    //1.�����ڵ�������Դ�ڵ�ĺ���
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
//    //2.��random
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
//    //3.������������һ��
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