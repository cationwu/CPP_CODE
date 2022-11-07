#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


void TestSList1()
{
	SLTNode* plist = CreateSList(5);
	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = CreateSList(5);
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	/*SLTPopBack(&plist);
	SLTPrint(plist);*/
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 100);
	SLTPushFront(&plist, 200);
	SLTPushFront(&plist, 300);
	SLTPushFront(&plist, 400);

	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
}

void TestSList5()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* p = SLTFind(plist, 3);
	SLTInsertAfter(p, 30);

	/*p = SLTFind(plist, 300);
	SLTInsertAfter(p, 30);*/

	p = SLTFind(plist, 2);
	SLTInsert(&plist, p, 20);

	/*if (p)
	{
		SLTInsertAfter(p, 30);
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}*/

	SLTPrint(plist);
}

void TestSList6()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* p = SLTFind(plist, 3);
	SLTEraseAfter(p);
	SLTPrint(plist);

	p = SLTFind(plist, 3);
	SLTErase(&plist, p);
	p = NULL;
	SLTPrint(plist);

	SLTDestroy(&plist);

	SLTPrint(plist);
}

int main()
{
	TestSList6();
	return 0;
}