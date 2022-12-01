#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void AdjustDown(HPDataType* a, int n, int parent);
void AdjustUp(HPDataType* a, int child);
void Swap(HPDataType* p1, HPDataType* p2);


// 堆的构建
void HeapCreate(HP* hp, HPDataType* a, int n);

void HeapPrint(HP* php);
void HeapInit(HP* php);
void HeapDestroy(HP* php);

// 保持他继续是一个堆 O(logN)
void HeapPush(HP* php, HPDataType x);

// 删除堆顶的数据，并且保持他继续是一个堆 O(logN)
void HeapPop(HP* php);

HPDataType HeapTop(HP* php);

int HeapSize(HP* hp);
// 堆的判空
bool HeapEmpty(HP* hp);
