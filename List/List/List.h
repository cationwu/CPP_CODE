#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

//typedef char LTDataType;
//typedef double LTDataType;
typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* BuyListNode(LTDataType x);
LTNode* LTInit();

void LTPrint(LTNode* phead);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

// 双向链表在pos的前面进行插入
void LTInsert(LTNode* pos, LTDataType x);
// 双向链表删除pos位置的结点
void LTErase(LTNode* pos);

//判断链表是否为空
bool LTEmpty(LTNode* phead);

//计算链表长度
size_t LTSize(LTNode* phead);
void LTDestroy(LTNode* phead);

