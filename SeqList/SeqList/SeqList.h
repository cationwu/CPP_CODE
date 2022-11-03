#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��̬˳���--��ʵ�ã�NС�˲����ã�N�����˷ѿռ�
//#define N 1000
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;

//��̬˳���--�������ռ�

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//��¼�洢����Ч����
	int capacity;//�ռ�������С
}SL;

void SLPrint(SL* ps);
void SLInit(SL* ps);
void SLDestroy(SL* ps);
//����
void SLCheckCapacity(SL* ps);


//β��βɾ
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

//ͷ��ͷɾ
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

//˳������
int SLFind(SL* ps, SLDataType x, int begin);

//˳�����posλ�ò���x
void SLInsert(SL* ps, int pos, SLDataType x);

//˳���ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos);

