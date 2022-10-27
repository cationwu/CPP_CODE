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


//β��βɾ
void SLPushBack(SL* ps,SLDataType x);
void SLPopBack(SL* ps);
