#define _CRT_SECURE_NO_WARNINGS 1

#include <time.h>
#include "Heap.h"

void TestHeap5()
{
	// 造数据
	int n, k;
	printf("请输入n和k:>");
	scanf("%d%d", &n, &k);
	srand(time(0));
	FILE* fin = fopen("data.txt", "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		return;
	}

	//int randK = k;
	for (size_t i = 0; i < n; ++i)
	{
		int val = rand() % 100000;
		fprintf(fin, "%d\n", val);
	}

	fclose(fin);

	/////////////////////////////////////////////////////////////////////////////////////////
	// 找topk
	FILE* fout = fopen("data.txt", "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}

	//int minHeap[5];
	int* minHeap = malloc(sizeof(int) * k);
	if (minHeap == NULL)
	{
		perror("malloc fail");
		return;
	}

	for (int i = 0; i < k; ++i)
	{
		fscanf(fout, "%d", &minHeap[i]);
	}

	// 建小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(minHeap, k, i);
	}

	int val = 0;
	while (fscanf(fout, "%d", &val) != EOF)
	{
		if (val > minHeap[0])
		{
			minHeap[0] = val;
			AdjustDown(minHeap, k, 0);
		}
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%d ", minHeap[i]);
	}
	printf("\n");

	fclose(fout);
}

int main()
{
	TestHeap5();

	return 0;
}