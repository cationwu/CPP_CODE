#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

// 堆的构建
//void HeapCreate(HP* php, HPDataType* a, int n)
//{
//	assert(php);
//	HeapInit(php);
//	for (int i = 0; i < n; ++i)
//	{
//		HeapPush(php, a[i]);
//	}
//}

void HeapCreate(HP* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (php->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType) * n);
	php->size = php->capacity = n;

	// 建堆算法
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(php->a, n, i);
	}
}

void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	//while (parent >= 0)  不好
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


void HeapPush(HP* php, HPDataType x)
{
	assert(php);

	// 扩容
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		php->a = tmp;
		php->capacity = newCapacity;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// 确认child指向大的那个孩子
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}

		// 1、孩子大于父亲，交换，继续向下调整
		// 2、孩子小于父亲，则调整结束
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}

int HeapSize(HP* php)
{
	assert(php);

	return php->size;
}

// 堆的判空
bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}