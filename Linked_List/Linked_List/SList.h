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

// ��̬����һ�����
SLTNode* BuySLTNode(SLTDataType x);

//����������
SLTNode* CreateSList(int n);

// �������ӡ
void SLTPrint(SLTNode* phead);

//������β��βɾͷ��ͷɾ
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

// ��������posλ��֮�����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

// ������ɾ��posλ��֮���ֵ
void SLTEraseAfter(SLTNode* pos);

// ��pos֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// ɾ��posλ��
void SLTErase(SLTNode** pphead, SLTNode* pos);

void SLTDestroy(SLTNode** pphead);