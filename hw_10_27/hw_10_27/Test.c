#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void TestSeqList()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPrint(&sl);

	SLPushBack(&sl, 8);
	SLPrint(&sl);

	SLDestroy(&sl);
}


int main()
{
	TestSeqList();
	return 0;
}