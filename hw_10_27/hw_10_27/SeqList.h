#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//静态顺序表--不实用，N小了不够用，N大了浪费空间
//#define N 1000
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;

//动态顺序表--按需扩空间

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//记录存储的有效数据
	int capacity;//空间容量大小
}SL;

void SLPrint(SL* ps);
void SLInit(SL* ps);
void SLDestroy(SL* ps);


//尾插尾删
void SLPushBack(SL* ps,SLDataType x);
void SLPopBack(SL* ps);
