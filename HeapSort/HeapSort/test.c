#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapSort(int* a,int n)
{
	for (int i = (n-1-1)/2; i >=0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		AdjustDown(a, end, 0);
		end--;
	}
}

void test()
{
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HeapSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	test();
	return 0;
}