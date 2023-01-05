#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	int range = max - min + 1;
	int* countA = (int*)calloc(range,sizeof(int));
	if (countA == NULL)
	{
		perror("malloc fail\n");
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		countA[a[i] - min]++;
	}
	int k = 0;
	for (int i = 0; i < range; i++)
	{
		while (countA[i]--)
		{
			a[k++] = i + min;
		}
	}

	free(countA);
}

int main()
{
	int a[] = { 2,1,3,5,2,1,4 };
	int sz = sizeof(a) / sizeof(int);
	CountSort(a, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}