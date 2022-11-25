#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void TestHeap1()
{
	int array[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
	{
		HeapPush(&hp, array[i]);
	}
	HeapPrint(&hp);

	// topK 
	int k = 5;
	while (k--)
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}

	HeapDestroy(&hp);
}

void TestHeap2()
{
	int array[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
	{
		HeapPush(&hp, array[i]);
	}

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}

	HeapDestroy(&hp);
}

int main()
{
	TestHeap2();

	return 0;
}