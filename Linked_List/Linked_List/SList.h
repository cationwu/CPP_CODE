#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

// 动态申请一个结点
SLTNode* BuySLTNode(SLTDataType x);

//创建单链表
SLTNode* CreateSList(int n);

// 单链表打印
void SLTPrint(SLTNode* phead);

//单链表尾插尾删头插头删
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

// 单链表在pos位置之后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

// 单链表删除pos位置之后的值
void SLTEraseAfter(SLTNode* pos);

// 在pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// 删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos);

void SLTDestroy(SLTNode** pphead);