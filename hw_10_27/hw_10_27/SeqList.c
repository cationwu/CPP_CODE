#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLDestroy(SL* ps)
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = 0;
		ps->capacity = 0;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//À©ÈÝ
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType *tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newCapacity);
		if (tmp==NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;
}